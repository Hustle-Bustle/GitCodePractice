#include<iostream>
using namespace std;
int& fun01() //返回局部变量a的引用，存放在栈区，不好
{
	int a=10;
	return a;
}
int& fun02() //返回静态局部变量a的引用，OK
{
	static int a = 10;
	return a;
}
void showValue(const int& value)
{
	//value = 100;不可修改，加了const修饰防止误操作
	cout << value << endl;
}
void func1(int a, int)//函数占位参数
{
	cout << "This is func1" << endl;
}
void func2(int a, int=10)//函数占位参数也可以有默认参数
{
	cout << "This is func1" << endl;
}
int main02()
{
	func1(10,10);//函数占位参数必须填补，后面的10不能少
	func2(10);//默认参数可以不写

	//int& ref1 = fun01();//局部变量a的别名用ref1接收,即ref1为a的别名
	//cout << ref1 << endl;//10
	//cout << ref1 << endl;//乱码

	//int& ref2 = fun02();//静态局部变量a的别名用ref2接收,即ref2为a的别名
	//cout << ref2 << endl;//10
	//cout << ref2 << endl;//10

	//fun02() = 1000;//如果函数的返回值是引用，则这个函数调用可以作为左值
	//cout << ref2 << endl;//1000
	//cout << ref2 << endl;//1000

	system("pause");
	return 0;
}


