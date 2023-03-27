#include<iostream>
using namespace std;
class abstractdrinking
{
public:
	virtual void boil() = 0;
	virtual void brew() = 0;
	virtual void pourincup() = 0;
	virtual void putsomething() = 0;
	void makedrink()
	{
		boil();
		brew();
		pourincup();
		putsomething();
	}
};
class coffee :public abstractdrinking
{
public:
	void boil()
	{
		cout << "煮农夫山泉" << endl;
	};
	void brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	void pourincup()
	{
		cout << "倒入杯中" << endl;
	}
	void putsomething()
	{
		cout << "放糖" << endl;
	}

};
class tea :public abstractdrinking
{
public:
	void boil()
	{
		cout << "煮白开水" << endl;
	};
	void brew()
	{
		cout << "泡茶" << endl;
	}
	void pourincup()
	{
		cout << "倒入杯中" << endl;
	}
	void putsomething()
	{
		cout << "放枸杞" << endl;
	}

};
void dowork(abstractdrinking* abs)
{
	abs->makedrink();
	delete abs;
}

void test1()
{
	dowork(new(coffee));
	cout << "-----------------------" << endl;
	dowork(new(tea));
}
int main()
{
	test1();
}