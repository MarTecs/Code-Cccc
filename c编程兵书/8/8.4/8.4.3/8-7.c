#include<stdio.h>
int main() {
	
	
	int i, a[5] = { 5, 10, 15, 20, 25};
	int *p = a;
	for ( i = 0; i < 5; i++ ) {
		printf("a[%d] = %d\n", i , a[i]);
	}
	
	printf("\n");
	
	for( i = 0; i < 5; i++ ){
		printf("*(p+%d)=%d\n",i,*(p+i));
	}
	
	return 0;
}
