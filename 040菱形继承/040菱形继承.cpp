#include<iostream>
using namespace std;
class animal
{
public:
	int age;
};
class sheep:virtual public animal
{};
class tuo:virtual public animal
{};
class sheeptuo:public sheep,public tuo
{};
void test1()
{
	sheeptuo st;
	st.sheep::age;
	st.tuo::age;

}