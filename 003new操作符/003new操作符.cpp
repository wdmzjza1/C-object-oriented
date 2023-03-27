#include<iostream>
using namespace std;
int* func()
{
	int* a = new int(10);//​ 利用new创建的数据，会返回该数据对应的类型的指针
	return a;
}

int* func2()
{
	int b = 10;
	int* a = &b;
	return a;//返回的地址是随机的
}

int main()
{
	int* p = func();
	int* p2 = func2();

	cout << *p << endl;
	cout << *p2 << endl;

	delete p;

	int* arr = new int[10];//开辟一个大小为10的整形数组空间
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放数组 delete 后加 []
	delete[]arr;
}

//​ 注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放