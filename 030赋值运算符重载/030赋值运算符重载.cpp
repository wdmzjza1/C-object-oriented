#include<iostream>
using namespace std;
class person
{
public:
	person(int age)
	{
		m_age = new int(age);
	}
	person& operator=(person& p)
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		m_age = new int(*p.m_age);

		return *this;
	}
	~person()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}
	int* m_age;
};

void test01()
{
	person p1(10);
	person p2(20);
	person p3(30);
	p1 = p2 = p3;
	cout << "p1=" << *p1.m_age << endl;
	cout << "p2=" << *p2.m_age << endl;
	cout << "p3=" << *p3.m_age << endl;
}
int main()
{
	test01();
}