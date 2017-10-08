#include<stdio.h>
//统计行数：换行个数 - 1 
main () {
	int ch;
	int count = 0;
	while((ch = getchar()) != EOF) {
		if ( ch == '\n')
			count++;
	}
	printf("行数为%d\n", count);

}
