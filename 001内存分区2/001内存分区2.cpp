#include<iostream>
using namespace std;
int* func()
{
	int a = 10;
	return &a;
}

int* func2()
{
	int* a = new int(10);
	return a;
}

int main()
{
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;

	int* p2 = func2();
	cout << *p2 << endl;
	cout << *p2 << endl;

}