#include<iostream>
using namespace std;
class abstractcarculator
{
public:
	virtual int resualt()
	{
		return 0;
	}
public:
	int num1;
	int num2;
};
class addcarculate :public abstractcarculator
{
	int resualt()
	{
		return num1 + num2;
	}
};
class subcarculate :public abstractcarculator
{
	int resualt()
	{
		return num1 - num2;
	}
};
class mulcarculate :public abstractcarculator
{
	int resualt()
	{
		return num1 * num2;
	}
};
void test1()
{
	abstractcarculator* p=new addcarculate;
	p->num1 = 100;
	p->num2 = 200;
	cout << p->num1 << "+" << p->num2 << "=" << p->resualt() << endl;

	delete p;
	
	p = new subcarculate;
	p->num1 = 100;
	p->num2 = 200;
	cout << p->num1 << "-" << p->num2 << "=" << p->resualt() << endl;
}
int main()
{
	test1();
}