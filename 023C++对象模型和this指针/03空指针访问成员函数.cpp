#include<iostream>
using namespace std;
class person
{
public:
	void showclassname()
	{
		cout << "����person�࣡" << endl;
	}
	void showperson()
	{
		if (this == NULL)
		{
			return;
		}
		cout << m_age << endl;//�൱��this->m_age
	}
	int m_age;
};
void test03()
{
	person* p = NULL;
	p->showclassname();
	p->showperson();
	
}
//int main()
//{
//	test03();
//	return 0;
//}