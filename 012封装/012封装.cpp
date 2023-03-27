#include<iostream>
using namespace std;
const double PI = 3.14;


//1、封装的意义
//将属性和行为作为一个整体，用来表现生活中的事物

//封装一个圆类，求圆的周长
//class代表设计一个类，后面跟着的是类名
class circle
{
public://访问权限  公共的权限

	//属性
	int m_r;
	//行为
	//获取到圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

class student
{
public:
	string m_name;
	int m_id;
public:
	void setNAME(string name)
	{
		m_name = name;
	}
	void setID(int id)
	{
		m_id = id;
	}
	void showstudent()
	{
		cout << "name:" << m_name << "ID:" << m_id << endl;
	}
};
int main()
{
	circle c1;
	c1.m_r = 10;

	cout << "圆的周长为：" << c1.calculateZC() << endl;

	student std1;
	std1.setNAME("德玛西亚");
	std1.setID(250);
	std1.showstudent();
}