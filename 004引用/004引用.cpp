#include<iostream>
using namespace std;

void myswap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void myswap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

void myswap3(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int& b = a;//int&别名=原名

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
	int c = 10;
	int d = 20;

	myswap1(c, d);
	cout << "c=" << c << "d=" << d<<endl;

	myswap2(&c, &d);
	cout << "c=" << c << "d=" << d<<endl;

	myswap3(c, d);
	cout << "c=" << c << "d=" << d<<endl;


}