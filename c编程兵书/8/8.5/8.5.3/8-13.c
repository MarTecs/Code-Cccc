#include<stdio.h>
int main() {
	
	
	int a[4][5], i;
	int *p;
	p = a[0];
	for ( i = 0; i < 20; i++ ) {
		*p++ = i;
	}
	
	printf("������׵�ַΪ%d\n", a[0]);
	printf("p��ֵΪ:%d\n", *p);
	printf("��ά�����ֵΪ:");
	
	
	//���ɾ���������г��򣬽�����õ���ȷ����������˼��һ��Ϊʲô? 
	p = a[0];
	for ( i = 0; i < 20; i++ ) {
		if ( i % 5 == 0 ) {
			printf("\n");
		} 
		
		printf("%4d ", *p++);
	}
	
	
	return 0;
	
} 
