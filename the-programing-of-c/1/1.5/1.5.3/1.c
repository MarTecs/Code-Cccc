#include<stdio.h>
//ͳ�����������и��� - 1 
main () {
	int ch;
	int count = 0;
	while((ch = getchar()) != EOF) {
		if ( ch == '\n')
			count++;
	}
	printf("����Ϊ%d\n", count);

}
