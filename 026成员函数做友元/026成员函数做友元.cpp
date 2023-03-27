#include<iostream>
using namespace std;
class build;
class goodgay
{
public:
	goodgay();
	void visit();
	build *p;

};
class build
{
	friend void goodgay::visit();
public:
	build();
	string buid1;
private:
	string buid2;
};
goodgay::goodgay()
{
	p=new build;
	
}
void goodgay::visit()
{
	cout << "好基友正在访问：" << p->buid1 << endl;
	cout << "好基友正在访问：" << p->buid2 << endl;
}
build::build()
{
	buid1 = "卧室";
	buid2 = "客厅";
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