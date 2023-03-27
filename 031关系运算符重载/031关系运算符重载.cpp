#include<iostream>
using namespace std;
class person
{
public:
	bool operator==(person& p)
	{
		if (this->m_age == p.m_age && this->m_name == p.m_name)
		{
			return true;

		}
		else
		{
			return false;
		}
	};

	bool operator!=(person& p)
	{
		if (this->m_age == p.m_age && this->m_name == p.m_name)
		{
			return false;

		}
		else
		{
			return true;
		}
	};

	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	};
public:
	string m_name;
	int m_age;
};
void test1()
{
	person p1("张三",18);
	person p2("李四", 18);
	if (p1 == p2)
	{
		cout << "p1==p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}
int main()
{
	test1();
}