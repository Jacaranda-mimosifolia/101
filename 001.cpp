#include<stdio.h>
int a=1;int b=2;
int *p;
int main()
{
	p=&a;
	printf("*p=&a,%d\n",*p);
	p=&b;
	printf("*p=&b,%d\n",*p);
	p=NULL;//��ָ��
	printf("*p=NULL,%d\n",*p);//��ָ�벻�ɷ��ʣ�ʹ��ָ��ǰ��Ҫ�ж��Ƿ�Ϊ��ָ�� 
	p=0x1000;//Ұָ�� 
	printf("*p=0x1000,%d\n",*p);//����ʹ�û���ɲ���Ԥ֪���ڴ���� 
	return 0;
}
