#include<stdio.h>
int main() {
	
	
	int a[4][5], i;
	int *p;
	p = a[0];
	for ( i = 0; i < 20; i++ ) {
		*p++ = i;
	}
	
	
	
	//���ɾ���������г��򣬽�����õ���ȷ����������˼��һ��Ϊʲô? (�ο��Լ�д�����´���)
	/*
	printf("������׵�ַΪ%d\n", a[0]);
	printf("p��ֵΪ:%d\n", *(p-1));
	printf("��ά�����ֵΪ:");
	*/
	
	
	p = a[0];
	for ( i = 0; i < 20; i++ ) {
		if ( i % 5 == 0 ) {
			printf("\n");
		} 
		
		printf("%4d ", *p++);
	}
	
	
	return 0;
	
} 
