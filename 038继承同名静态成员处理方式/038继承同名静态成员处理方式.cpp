#include<iostream>
using namespace std;
class base
{
public:
	static void func()
	{
		cout << "base-static void func()" << endl;
	}
	static void func(int a)
	{
		cout << "base-static void func(int a)" << endl;
	}
public:
	static int m_a;
};
int base::m_a = 100;
class son :public base
{
public:
	static void func()
	{
		cout << "son-static void func()" << endl;
	}

	static int m_a;
};
int son::m_a = 200;
void test1()
{
	cout << "通过对象访问：" << endl;
	son s;
	cout << "son下m_a=" << s.m_a << endl;
	cout << "base下m_a=" << s.base::m_a << endl;

	cout << "通过类名访问:" << endl;
	cout << "son下m_a=" << son::m_a << endl;
	cout << "base下m_a=" << son::base::base::m_a << endl;
}
void test2()
{
	cout << "通过对象访问：" << endl;
	son s;
	s.func();
	s.base::func();
	s.base::func(100);

	cout << "通过类名访问:" << endl;
	son::func();
	son::base::func();
	son::base::func(200);
}
int main()
{
	test1();
	test2();
}