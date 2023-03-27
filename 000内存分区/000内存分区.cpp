#include<iostream>
using namespace std;
int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
	int a = 10;
	int b = 10;
	cout << "局部变量a的地址是：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;

	cout << "全局变量g_a的地址是：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址是：" << (int)&g_b << endl;

	static int s_a = 10;
	static int s_b = 10;

	cout << "静态变量a的地址是：" << (int)&s_a << endl;
	cout << "静态变量b的地址是：" << (int)&s_b << endl;

	cout << "字符串的地址是：" << (int)&"hello world" << endl;
	cout << "字符串的地址是：" << (int)&"hello world1" << endl;

	cout << "全局常量c_g_a的地址是：" << (int)&c_g_a << endl;
	cout << "全局常量c_g_b的地址是：" << (int)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部常量c_l_a的地址是：" << (int)&c_l_a << endl;
	cout << "局部常量c_l_b的地址是：" << (int)&c_l_b << endl;

	return 0;



}
//总结：

//C++中在程序运行前分为全局区和代码区
//全局区包含常量区
//代码区特点是共享和只读
//全局区中存放全局变量、静态变量、常量
//常量区中存放 const修饰的全局常量 和 字符串常量