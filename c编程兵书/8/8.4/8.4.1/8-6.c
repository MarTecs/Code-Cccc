#include<stdio.h>
int main() {
	
	int a[5] = { 5, 10, 15, 20, 25};
	int *p = a;
	printf("指针变量p的值：%d\n",p);
	printf("数组a的首地址：%d\n",a);
	printf("数组a第1个元素的值：%d\n",a[0]);
	printf("指针指向数组元素的值：%d\n", *p);
	
	printf("%d\t%d\t%d\t", *(p+1), *(p+2), *(p+3));
	
	return 0;
} 
