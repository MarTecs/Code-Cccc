#include<stdio.h>
main() {
	long nc;
	nc = 0;
	while ( getchar() != EOF ) 
		//++nc ��� nc = nc + 1 Ч�ʸ���Ҳ������ 
		++nc;
	printf("%ld\n",nc);
} 
