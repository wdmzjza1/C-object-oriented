#include<iostream>
using namespace std;
class person
{
public:
	person()
	{
		
	}
	int m_a=10;
	mutable  int m_b;
	//thisָ��ı�����һ��ָ�볣����ָ���ָ�򲻿��޸�
	//�������ָ��ָ���ֵҲ�������޸ģ���Ҫ����������
	void showperson() const
	{
		//const Type* const pointer;
		//this = NULL; //�����޸�ָ���ָ�� Person* const this;
		//this->mA = 100; //����thisָ��ָ��Ķ���������ǿ����޸ĵ�
		this->m_b = 100;
		//m_a = 10;
	}
	void fun()
	{

	}
};

//const���ζ���  ������
void test01()
{
	const person p;
	cout << p.m_a << endl;
	//person.mA = 100; //���������޸ĳ�Ա������ֵ,���ǿ��Է���
	p.m_b = 200;//���ǳ���������޸�mutable���γ�Ա����
	//p.func(); //�������ܵ��÷�const�ĺ���
	p.showperson(); //������ֻ�ܵ��ó�����

}
int main()
{
	test01();
}