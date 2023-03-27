//默认情况下，c++编译器至少给一个类添加3个函数
//
//1．默认构造函数(无参，函数体为空)
//
//2．默认析构函数(无参，函数体为空)
//
//3．默认拷贝构造函数，对属性进行值拷贝
//
//构造函数调用规则如下：
//
//如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
//
//如果用户定义拷贝构造函数，c++不会再提供其他构造函数

#include<iostream>
using namespace std;
class person
{
public:
	person()
	{
		cout << "无参构造函数！" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "有参构造函数！" << endl;
	}
	//拷贝构造函数
	person(const person& p) {
		age = p.age;
		cout << "拷贝构造函数!" << endl;
	}
	//析构函数
	~person() {
		cout << "析构函数!" << endl;
	}
public:
	int age;
};

void test01()
{
	person p1(18);
	//person p2(p1);
	//cout << "p2的年龄为："<<p2.age << endl;
}
void test02()
{
	person p;
}
int main()
{
	//test01();
	test02();
}