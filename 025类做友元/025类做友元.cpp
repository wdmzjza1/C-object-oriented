#include<iostream>
using namespace std;
class buiding;
class goodgay
{
public:
	goodgay();
	void visit();
private:
	buiding* p;
};
class buiding
{
friend	class goodgay;
public:
	buiding();
	string buiding1;
private:
	string buiding2;
};
goodgay::goodgay()
{
	p = new buiding;
}
void goodgay::visit()
{
	cout << "好基友正在访问" << p->buiding1 << endl;
	cout << "好基友正在访问" << p->buiding2 << endl;
}
buiding::buiding()
{
	buiding1 = "客厅";
	buiding2 = "卧室";
}
void test1()
{
	goodgay gg;
	gg.visit();
}
int main()
{
	test1();
}