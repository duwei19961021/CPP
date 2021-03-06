/**
 * 第一个只出现一次的字符
 * 链接：https://leetcode-cn.com/problems/di-yi-ge-zhi-chu-xian-yi-ci-de-zi-fu-lcof/
 */

class Solution {
public:
    char firstUniqChar(string s)
    {
        char ret = ' ';

        if(s.size()==0)
        {
            return ret;
        }

        map<char,int> m;
        for(int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }

        for(int i = 0; i < s.size();i++)
        {
            if(m[s[i]] == 1)
            {
                ret = s[i];
                break;
            }
        }
        return ret;
    }
};

// 解法2
class Solution {
public:
    char firstUniqChar(string s) 
    {
        vector<int> book(26,0);
        for(int i = 0; i < s.size(); i++)
        {
            book[s[i]-'a']++;
        }
        for(int i = 0; i < s.size();i++)
        {
            if(book[s[i]-'a'] == 1)
            {
                return s[i];
            }
        }
        return ' ';
    }
};
