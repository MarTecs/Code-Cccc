#include<stdio.h>
int main() {
	int a[4][5];
	
	printf("数组首地址为%d\t%d\t\n",&a,&a[0][0]);
	printf("数组长度为%d\n",sizeof(a));
	printf("数组第1行的起始地址为%d\n",&a[0]);
	printf("数组第2行的起始地址为%d\n",a[1]);
	printf("数组第3行的起始地址为%d\n",a[2]);
	printf("数组第4行的起始地址为%d\n",a[3]);
	
	printf("数组第4行的起始地址为%d\n",*(a+3));
	return 0;
} 
