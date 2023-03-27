#include<iostream>
using namespace std;
class myint
{
	friend ostream& operator<< (ostream& cout, myint& myint);
public:
	myint& operator++();
	myint& operator++(int);
	myint()
	{
		m_num = 0;
	}
	//myint& operator++()
	//{
	//	m_num++;
	//	return*this;
	//}
public:
	int m_num;
};


ostream& operator<< (ostream& cout, myint& myint)
{
	cout << myint.m_num;
	return cout;
}
myint& myint::operator++()
{
	m_num++;
	return *this;
}
myint& myint::operator++(int)
{
	myint temp= *this;
	m_num++;
	return temp;
}

void test()
{
	myint myint;
	++myint;
	myint++;
	cout << myint << endl;
}
int main()
{
	test();
}