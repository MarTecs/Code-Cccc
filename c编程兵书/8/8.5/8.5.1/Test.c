#include<stdio.h>
int main() {
	int a[4][5];
	
	printf("�����׵�ַΪ%d\t%d\t\n",&a,&a[0][0]);
	printf("���鳤��Ϊ%d\n",sizeof(a));
	printf("�����1�е���ʼ��ַΪ%d\n",&a[0]);
	printf("�����2�е���ʼ��ַΪ%d\n",a[1]);
	printf("�����3�е���ʼ��ַΪ%d\n",a[2]);
	printf("�����4�е���ʼ��ַΪ%d\n",a[3]);
	
	printf("�����4�е���ʼ��ַΪ%d\n",*(a+3));
	return 0;
} 
