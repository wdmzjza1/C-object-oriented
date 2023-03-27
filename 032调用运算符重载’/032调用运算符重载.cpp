#include<iostream>
using namespace std;
class myprint
{
public:
	void operator()(string text)
	{
		cout << text << endl;

	}
};
void test1()
{
	myprint myfunc;
	myfunc("hello world");
}
class myadd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
void test2()
{
	myadd myfunc2;
	int ref=myfunc2(1, 2);
	cout << "ref==" << ref;
}
int main()
{
	test1();
	test2();
}