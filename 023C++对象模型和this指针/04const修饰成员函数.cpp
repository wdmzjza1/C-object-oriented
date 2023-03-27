#include<iostream>
using namespace std;
class person
{
public:
	person()
	{
		
	}
	int m_a=10;
	mutable  int m_b;
	//this指针的本质是一个指针常量，指针的指向不可修改
	//如果想让指针指向的值也不可以修改，需要声明常函数
	void showperson() const
	{
		//const Type* const pointer;
		//this = NULL; //不能修改指针的指向 Person* const this;
		//this->mA = 100; //但是this指针指向的对象的数据是可以修改的
		this->m_b = 100;
		//m_a = 10;
	}
	void fun()
	{

	}
};

//const修饰对象  常对象
void test01()
{
	const person p;
	cout << p.m_a << endl;
	//person.mA = 100; //常对象不能修改成员变量的值,但是可以访问
	p.m_b = 200;//但是常对象可以修改mutable修饰成员变量
	//p.func(); //常对象不能调用非const的函数
	p.showperson(); //常对象只能调用常函数

}
int main()
{
	test01();
}