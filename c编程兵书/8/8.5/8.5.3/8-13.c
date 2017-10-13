#include<stdio.h>
int main() {
	
	
	int a[4][5], i;
	int *p;
	p = a[0];
	for ( i = 0; i < 20; i++ ) {
		*p++ = i;
	}
	
	printf("二维数组的值为:");
	
	p = a[0];
	for ( i = 0; i < 20; i++ ) {
		if ( i % 5 == 0 ) {
			printf("\n");
		} 
		
		printf("%4d ", *p++);
	}
	
	
	return 0;
	
} 
