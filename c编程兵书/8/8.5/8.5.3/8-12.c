#include<stdio.h>
int main() {
	
	int a[4][5], i = 0, j = 0;
	for ( i = 0; i < 5; i++ ) {
		for ( j = 0; j < 5; j++ ) {
			a[i][j] = i * 5 + j;
		} 
	}
	
	printf("二维数组的值为：\n");
	for( i = 0; i < 4; i++ ) {
		for ( j = 0; j < 5; j++ ) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
