#include<stdio.h>
int main() {
	
	int a[5] = { 5, 10, 15, 20, 25};
	int *p = a;
	printf("ָ�����p��ֵ��%d\n",p);
	printf("����a���׵�ַ��%d\n",a);
	printf("����a��1��Ԫ�ص�ֵ��%d\n",a[0]);
	printf("ָ��ָ������Ԫ�ص�ֵ��%d\n", *p);
	
	printf("%d\t%d\t%d\t", *(p+1), *(p+2), *(p+3));
	
	return 0;
} 
