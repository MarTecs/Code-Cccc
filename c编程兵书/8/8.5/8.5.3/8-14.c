#include<stdio.h>
int main() {
	
	
	int a[4][5], i ,j;
	int (*p)[5];
	
	
	p = a;
	for ( i = 0; i < 4; i++ ) {
		for ( j = 0; j < 5; j++ ) {
			*(*p + j) = i * 5 + j;
		}
		p++;
	} 
	
	printf("��ά�����ֵΪ��\n");
	
	p = a;
	
	for ( i = 0; i < 4; i++ ) {
		for ( j = 0; j < 5; j++ ) {
			printf("%4d " , *(*p+j));
		}
		
		printf("\n");
		p++;
	}
	
	
	return 0;
} 
