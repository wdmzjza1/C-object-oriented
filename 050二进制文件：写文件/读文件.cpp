#include<iostream>
using namespace std;
#include<fstream>
class person
{
public:
	char m_name[64];
	int m_age;
};

void test1()
{
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
	}

	person p;
	ifs.read((char*)&p, sizeof(p));
	cout << "姓名：" << p.m_name << "年龄：" << p.m_age << endl;
}
int main()
{
	test1();
}