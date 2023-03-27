#include<iostream>
using namespace std;
class animal
{
public:
	animal()
	{
		cout << "animal构造函数调用" << endl;
	}
	virtual void speak() = 0;
	virtual~animal() = 0;
	//virtual~animal()
	//{
	//	cout << "animal虚析构函数" << endl;
	//}
};
class cat:public animal
{
public:
	cat(string name)
	{
		cout << "cat构造函数调用" << endl;
		m_name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_name<<"小猫在说话" << endl;
	}
	~cat()
	{
		cout << "cat析构函数调用" << endl;
		if (this->m_name != NULL)
		{
			delete m_name;
			m_name = NULL;
		}
	}
	string* m_name;
};
animal::~animal()
{
	cout << "animal纯虚析构函数调用" << endl;
}
void test1()
{
	animal* animal = new cat("tom");
	animal->speak();
	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
	//怎么解决？给基类增加一个虚析构函数
	//虚析构函数就是用来解决通过父类指针释放子类对象
	delete animal;
}
int main()
{
	test1();
}
// 1. 虚析构或纯虚析构就是用来解决通过父类指针释放子类对象
//
//​ 2. 如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
//
//​ 3. 拥有纯虚析构函数的类也属于抽象类