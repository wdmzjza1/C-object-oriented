#include<iostream>
using namespace std;
class person
{
public:
	int m_a;
	int m_b;
};
ostream& operator<<(ostream& cout, person& p)
{
	cout << "a:" << p.m_a << " " << "b:" << p.m_b << endl;
	return cout;
}
void test()
{
	person p1;
	p1.m_a = 10;
	p1.m_b = 20;
	cout << p1 << endl;
}
int main()
{
	test();
	cout << "hello world" << endl;
}