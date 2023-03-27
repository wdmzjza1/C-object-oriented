#include<iostream>
using namespace std;
class person
{
public:
	//姓名设置为可读可写
	void setname(string name)
	{
		m_name = name;
	}
	string getname()
	{
		return  m_name;
	}
	void setage(int age)
	{
		if (age > 150 || age < 0)
		{
			cout << "你个老妖精！" << endl;
		}
		m_age = age;
	}
	int getage()
	{
		return m_age;
	}
	//情人设置为只写
	void setlover(string lover)
	{
		m_lover = lover;
	}

private:
	string m_name;
	int m_age;
	string m_lover;
};

int main()
{
	person p;
	p.setname("张三");
	cout << "姓名：" << p.getname() << endl;
	p.setage(18);
	cout << "年龄：" <<p.getage() << endl;
	p.setlover("苍井");
	//cout << "情人： " << p.m_Lover << endl;  //只写属性，不可以读取
}
//**优点1：** 将所有成员属性设置为私有，可以自己控制读写权限
//
//** 优点2：** 对于写权限，我们可以检测数据的有效性