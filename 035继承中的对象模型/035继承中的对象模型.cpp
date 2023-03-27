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
class son :public base
{
public:
	int m_d;
};
void test1()
{
	cout << sizeof(son) << endl;
}
int main()
{
	test1();
}
