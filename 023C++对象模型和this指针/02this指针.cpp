//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	person(int age)
//	{
//		//1、当形参和成员变量同名时，可用this指针来区分
//		this->age = age;
//	}
//	person& personaddperson(person p)
//	{
//		//this指针指向被调用的成员函数所属的对象,p2调用，this指向p2，*this就是p2本身
//		this->age += p.age;
//		//返回对象本身
//		return *this;
//	}
//	int age;
//};
//void test01()
//{
//	person p1(10);
//	cout << "p1.age=" << p1.age << endl;
//
//	person p2(10);
//	p2.personaddperson(p1).personaddperson(p1).personaddperson(p1);//每次返回p2
//	cout << "p2.age=" << p2.age << endl;
//}
////int main2()
////{
////	test01();
////	return 0;
////}