#include<iostream>
using namespace std;
class person
{
public:
	//�Ǿ�̬��Ա����ռ����ռ�
	int a=0;
	//��̬��Ա������ռ����ռ�
	static int b;
	//����Ҳ��ռ����ռ䣬���к�������һ������ʵ��
	void func()
	{

	}
	//��̬��Ա����Ҳ��ռ����ռ�
	static void func2()
	{

	}
};
int person::b = 10;
//int main1()
//{
//	cout << sizeof(person) << endl;
//	return 0;
//}