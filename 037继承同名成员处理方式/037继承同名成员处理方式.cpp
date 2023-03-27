#include<iostream>
using namespace std;
class base
{
public:
	int m_a = 100;
	void func()
	{
		cout << "base-func()调用" << endl;
	}
	void func(int a)
	{
		cout << a << endl;
	}
};
class son :public base
{
public:
	int m_a = 200;
	void func()
	{
		cout << "son-func()调用" << endl;
	}
};
void test1()
{
	base b;
	son s;
	cout << "s.m_a=" << s.m_a << endl;
	cout << "base.m_a=" << s.base::m_a << endl;
	s.func();
	s.base::func();
	s.base::func(100);
	b.func(200);
}
int main()
{
	test1();
}
//子类对象可以直接访问到子类中同名成员
//子类对象加作用域可以访问到父类同名成员
//当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问到父类中同名函数