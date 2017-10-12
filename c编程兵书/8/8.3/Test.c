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
		下面程序是错误的，将会报错，不可以对指针变量直接赋值 
	*/
	int *point;
	point = 200;
	printf("%d\t%d\n",point,*point);		//不可以这样写 
	
	return 0;
} 
