#include<iostream>
using namespace std;
class phone
{
public:
	phone(string name)
	{
		m_phonename = name;
		cout << "phone构造" << endl;
	}
	~phone()
	{
		cout << "phone析构" << endl;
	}
	string m_phonename;
};
class person
{
public:
	person(string name, string pname) :m_name(name), m_phone(pname)
	{
		cout << "person构造" << endl;
	}
	~person()
	{
		cout << "person析构" << endl;
	}
	string m_name;
	phone m_phone;
	void playgame()
	{
		cout << m_name << "使用" << m_phone.m_phonename << "牌手机！" << endl;
	}
};
void test01()
{
	person p("张三", "apple");
	p.playgame();
}
int main()
{
	test01();
}