#include<iostream>
using namespace std;
class person
{
public:
	//静态成员函数特点：
	//1 程序共享一个函数
	//2 静态成员函数只能访问静态成员变量
	static void func()
	{
		cout << "func调用" << endl;
		m_a = 100;
		//m_c = 100;//错误，不可以访问非静态成员变量
	}

	int m_c;
	static int m_a;
	//静态成员变量特点：
	//1 在编译阶段分配内存
	//2 类内声明，类外初始化
	//3 所有对象共享同一份数据
private:
	//静态成员函数也是有访问权限的
	static int m_b;//静态成员变量也是有访问权限的

	static void func2()
	{
		cout << "func2调用" << endl;
	}
};
int person::m_a = 10;
int person::m_b = 10;

void test01()
{
	//1.通过对象：
	person p1;
	p1.m_c = 10;
	p1.m_a = 100;
	//p1.m_b = 10;
	cout << "p1.m_a=" << p1.m_a << endl;
	cout << "p1.m_c=" << p1.m_c << endl;

	p1.func();

	person p2;
	p2.m_c = 10;
	p2.m_a = 200;
	cout << "p2.m_a=" << p2.m_a << endl;
	cout << "p2.m_c=" << p2.m_c << endl;

	//2.通过类名
	cout << "m_a=" << person::m_a << endl;
	//cout << "m_b=" << person::m_b << endl;
	person::func();
	//Person::func2(); //私有权限访问不到
}
int main()
{
	test01();
}