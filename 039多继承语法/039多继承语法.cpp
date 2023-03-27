#include<iostream>
using namespace std;
class base1
{
public:
	int a = 100;
};
class base2
{
public:
	int a = 200;
};
class son :public base1, public base2
{
public:
	int c = 300;
	int d = 400;
};
void test1()
{
	son s;
	cout << s.base1::a << endl;
	cout << s.base2::a << endl;
}
int main()
{
	test1();
}