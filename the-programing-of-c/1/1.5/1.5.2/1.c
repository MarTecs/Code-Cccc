#include<stdio.h>
main() {
	long nc;
	nc = 0;
	while ( getchar() != EOF ) 
		//++nc 相比 nc = nc + 1 效率更高也更精炼 
		++nc;
	printf("%ld\n",nc);
} 
