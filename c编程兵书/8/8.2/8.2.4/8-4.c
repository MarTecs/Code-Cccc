#include<stdio.h>
main() {
	int i = 10, j =5;
	int *pi;
	
	pi = &i;
	printf("i=%d\tj=%d\t*pi=%d\n",i,j,*pi);
	pi = &j;
	printf("i=%d\tj=%d\t*pi=%d\n",i,j,*pi);
	
	return 0;
	
	
	
} 
