#include<stdio.h>

int main01()
{
	int a = 10;
	int b = 20;
	int* p = &a;
	int** pp = &p;
	int*** ppp = &pp;

	//*ppp==pp==&p;
	//**ppp==*pp==p==&a;
	//***ppp==**pp==*p==a;

	//*pp=&b; //相当于p=&b
	//printf("%d\n", a);//10
	//printf("%d\n", *p);//20

	//**pp=100;//相当于a=100;
	//printf("%d\n", a);//100
	//printf("%d\n", *p);//100

	//*pp=100;野指针
	
	return 0;
}