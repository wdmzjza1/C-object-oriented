#include<iostream>
using namespace std;
//同一个作用域下
//函数名称相同
//函数参数类型不同 或者 个数不同 或者 顺序不同
void func()
{
	cout << "func的调用！" << endl;
}
void func(int a)
{
	cout << "func(int a)的调用！" << endl;
}
void func(double a)
{
	cout << "func(double a)的调用！" << endl;
}
void func(int a,double b)
{
	cout << "func(int a,double b)的调用！" << endl;
}
void func(double a,int b)
{
	cout << "func(double a,int b)的调用！" << endl;
}
//函数返回值不可以作为函数重载条件
//int func(double a, int b)
//{
//	cout << "func (double a ,int b)的调用！" << endl;
//}

int main()
{
	func();
	func(1);
	func(3.14);
	func(1, 3.14);
	func(3.14, 1);
}