#include<iostream>
using namespace std;
int& fun01() //���ؾֲ�����a�����ã������ջ��������
{
	int a=10;
	return a;
}
int& fun02() //���ؾ�̬�ֲ�����a�����ã�OK
{
	static int a = 10;
	return a;
}
void showValue(const int& value)
{
	//value = 100;�����޸ģ�����const���η�ֹ�����
	cout << value << endl;
}
void func1(int a, int)//����ռλ����
{
	cout << "This is func1" << endl;
}
void func2(int a, int=10)//����ռλ����Ҳ������Ĭ�ϲ���
{
	cout << "This is func1" << endl;
}
int main02()
{
	func1(10,10);//����ռλ����������������10������
	func2(10);//Ĭ�ϲ������Բ�д

	//int& ref1 = fun01();//�ֲ�����a�ı�����ref1����,��ref1Ϊa�ı���
	//cout << ref1 << endl;//10
	//cout << ref1 << endl;//����

	//int& ref2 = fun02();//��̬�ֲ�����a�ı�����ref2����,��ref2Ϊa�ı���
	//cout << ref2 << endl;//10
	//cout << ref2 << endl;//10

	//fun02() = 1000;//��������ķ���ֵ�����ã�������������ÿ�����Ϊ��ֵ
	//cout << ref2 << endl;//1000
	//cout << ref2 << endl;//1000

	system("pause");
	return 0;
}


