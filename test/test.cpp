#include<iostream>
using namespace std;
class num
{
public:
	num()
	{};
	int num1;
	int num2;
};
int add(num &p)//引用和指针一样可以在局部改变量影响全局
{
	p.num1 = 10;
	p.num2 = 20;
	cout << (int)&p << endl;
	return p.num1 + p.num2;
}
int main()
{
	num *p=new(num);//创建类对象指针必须用new初始化，普通类对象无法在局部改变量影响全局，指针和引用可以
	p->num1 = 100;
	p->num2 = 200;
	cout << (int)&p << endl;
	cout << add(p) << endl;
	cout << p.num1 << endl;
	cout << p.num2 << endl;
	num* p2 = new(num);
	
}