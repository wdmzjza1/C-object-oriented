#include<iostream>
using namespace std;
class person
{
public:
	//非静态成员变量占对象空间
	int a=0;
	//静态成员变量不占对象空间
	static int b;
	//函数也不占对象空间，所有函数共享一个函数实例
	void func()
	{

	}
	//静态成员函数也不占对象空间
	static void func2()
	{

	}
};
int person::b = 10;
//int main1()
//{
//	cout << sizeof(person) << endl;
//	return 0;
//}