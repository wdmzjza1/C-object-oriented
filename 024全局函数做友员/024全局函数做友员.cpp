#include<iostream>
using namespace std;
class buiding
{
friend	void goodgay(buiding* p);
public:
	string m_sittingroom = "客厅";
private:
	string m_badroom="卧室";
};

void goodgay(buiding* p)
{
	
	cout << "好基友正在访问：" << p->m_sittingroom << endl;
	cout << "好基友正在访问：" << p->m_badroom<< endl;
}
int main()
{
	buiding p;
	p.m_sittingroom = "卫生间";
	goodgay(&p);
}