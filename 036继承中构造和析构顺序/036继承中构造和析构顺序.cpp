#include<iostream>
using namespace std;
class base
{
public:
	base()
	{
		cout << "父类构造函数" << endl;
	}
	~base()
	{
		cout << "父类析构函数" << endl;
	}
};
class son :public base
{
public:
	son()
	{
		cout << "子类构造函数" << endl;
	}
	~son()
	{
		cout << "子类析构函数" << endl;
	}
};
void test1()
{
	//继承中 先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反
	son s;
}
int main()
{
	test1();
}