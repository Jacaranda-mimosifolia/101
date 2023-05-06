#include<stdio.h>
int a=1;int b=2;
int *p;
int main()
{
	p=&a;
	printf("*p=&a,%d\n",*p);
	p=&b;
	printf("*p=&b,%d\n",*p);
	p=NULL;//空指针
	printf("*p=NULL,%d\n",*p);//空指针不可访问，使用指针前，要判断是否为空指针 
	p=0x1000;//野指针 
	printf("*p=0x1000,%d\n",*p);//随意使用会造成不可预知的内存错误 
	return 0;
}
