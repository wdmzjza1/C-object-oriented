#include<iostream>
using namespace std;
class basepage
{
public:
	void herder()
	{
		cout << "公共头部" << endl;
	}
	void footer()
	{
		cout << "公共底部" << endl;
	}
	void left()
	{
		cout << "公共分类列表" << endl;
	}
};
class java:public basepage
{
public:
	void content()
	{
		cout << "java学科视频" << endl;
	}
};
class python :public basepage
{
public:
	void content()
	{
		cout << "python学科视频" << endl;
	}
};
class cpp :public basepage
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};
void test1()
{
	java ja;
	python py;
	cpp cpp;
	ja.content();
	py.content();
	cpp.content();
}
int main()
{
	test1();
}