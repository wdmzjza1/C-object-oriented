#include<iostream>
using namespace std;
class animal
{
public:
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};
class cat :public animal
{
public:
	virtual void speak()
	{
		cout << "小猫在说话" << endl;
	}
};
class dog :public animal
{
public:
	virtual void speak()
	{
		cout << "小狗在说话" << endl;
	}
};
void dospeak(animal& a)//相当于animal * const a=&a;
{
	a.speak();
};
void dospeak2(animal a)
{
	a.speak();
};
int main()
{
	cat cat;
	dospeak(cat);
	dospeak2(cat);
	dog dog;
	dospeak(dog);
	dospeak2(dog);

}