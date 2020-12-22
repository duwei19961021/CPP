#include <iostream>
using namespace std;
#include <vector>

void test01()
{
	vector<int> v1;
	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
	}

	// 利用 [] 方式访问
	for(int i=0;i<v1.size();i++)
	{
		cout << v1[i] << " ";
	}

	cout << endl;

	// 利用 at 方式访问
	for(int i=0;i<v1.size();i++)
	{
		cout << v1.at(i) << " ";
	}

	cout << endl;

	// 获取第一个元素
	cout << v1.front() << endl;
}

int main()
{
	test01();
	return 0;
}
