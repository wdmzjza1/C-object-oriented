#include<iostream>
using namespace std;
//三种权限
//公共权限  public     类内可以访问  类外可以访问
//保护权限  protected  类内可以访问  类外不可以访问
//私有权限  private    类内可以访问  类外不可以访问

class person
{
public:
	string m_name;
protected:
	string m_car;
private:
	int m_password;
public:
	void func()
	{
		m_name = "张三";
		m_car = "拖拉机";
		m_password = 123456;
	}
};
int main()
{
	person p;
	p.m_name = "李四";
	//p.m_Car = "奔驰";  //保护权限类外访问不到
	//p.m_Password = 123; //私有权限类外访问不到
}
//在C++中 struct和class唯一的区别就在于 默认的访问权限不同
//
//区别：
//
//struct 默认权限为公共
//	class 默认权限为私有