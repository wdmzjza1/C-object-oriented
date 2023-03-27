#include<iostream>
using namespace std;
class base
{
public:
	//纯虚函数
	//类中只要有一个纯虚函数就称为抽象类
	//抽象类无法实例化对象
	//子类必须重写父类中的纯虚函数，否则也属于抽象类
	virtual void func() = 0;
};
class son :public base
{
public:
	virtual void func()
	{
		cout << "func调用" << endl;
	};
};
void test1()
{
	base* s = new son;
	s->func();
	
}
int main()
{
	test1();

}