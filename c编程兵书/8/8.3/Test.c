#include<stdio.h>
int main() {
	
	int i = 10;
	int *p = &i;
	printf("%d\t",p);
	printf("%d\n",&i);
	
	int *q;
	q = &i;
	printf("%d\t%d\n",q,*q);
	
	
	/*
		��������Ǵ���ģ����ᱨ�������Զ�ָ�����ֱ�Ӹ�ֵ 
	*/
	int *point;
	point = 200;
	printf("%d\t%d\n",point,*point);		//����������д 
	
	return 0;
} 
