#include<stdio.h>

//编写一个程序，以每行一个单词的行使打印其输入 
main() {
	
	char ch;
	while ( (ch=getchar()) != EOF ) {
		printf("%c",ch);
	}
	printf("\n");
} 
