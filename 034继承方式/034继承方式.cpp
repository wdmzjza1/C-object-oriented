#include<iostream>
using namespace std;
class base
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son1:public base
{
public:
	void func()
	{
		m_a;
		m_b;
		m_c;
	}
};
class son2 :protected base
{
public:
	void func()
	{
		m_a;
		m_b;
		m_c;
	}
};
class son3 :private base
{
public:
	void func()
	{
		m_a;
		m_b;
		m_c;
	}
};
void myclass()
{
	son1 son1;
	son2 son2;
	son3 son3;
	son1.m_a
		son2.
		son3.
}