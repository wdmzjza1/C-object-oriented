#include<iostream>
using namespace std;
class person
{
public:
	person() {};
	person(int a, int b)
	{
		this->m_a = a;
		this->m_b = b;
	}
	//person operator+(const person& p)
	//{
	//	person temp;
	//	temp.m_a = this->m_a + p.m_a;
	//	temp.m_b = this->m_b + p.m_b;
	//	return temp;
	//}
	int m_a;
	int m_b;

};
person operator+(const person& p1, const person& p2)
{
	person temp(0, 0);
	temp.m_a = p1.m_a + p2.m_b;
	temp.m_b = p1.m_a + p2.m_b;
	return temp;
}
person operator+(const person& p1, const int a)
{
	person temp;
	temp.m_a = p1.m_a + a;
	temp.m_b = p1.m_b + a;
	return temp;
}
void test()
{
	person p1(10, 10);
	person p2(10, 10);
	person p3 = p1 + p2;
	cout << "m_a=" << p3.m_a;
	cout << "m_b=" << p3.m_b;
}
void test2()
{
	person p4(100, 100);
	person p5(100, 100);
	int a = 50;
	person p6 = p4 + a;
	cout << "m_a=" << p6.m_a;
	cout << "m_b=" << p6.m_b;
}
int main()
{
	test();
	test2();
}