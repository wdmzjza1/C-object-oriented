//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	person(int age)
//	{
//		//1�����βκͳ�Ա����ͬ��ʱ������thisָ��������
//		this->age = age;
//	}
//	person& personaddperson(person p)
//	{
//		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���,p2���ã�thisָ��p2��*this����p2����
//		this->age += p.age;
//		//���ض�����
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
//	p2.personaddperson(p1).personaddperson(p1).personaddperson(p1);//ÿ�η���p2
//	cout << "p2.age=" << p2.age << endl;
//}
////int main2()
////{
////	test01();
////	return 0;
////}