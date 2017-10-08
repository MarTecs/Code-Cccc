#include<stdio.h>
/*
将一个输入复制到输出，并将其中的制表符替换为\t,把回退符号替换为\b，将反斜杠替换为\\ 
*/
main() {
	char ch = 0;
	while( (ch = getchar()) != EOF ) {
		if(ch == '\t')
			printf("\\t");
		else if(ch == '\b')
			printf("\\b");
		else if(ch == '\\')
			printf("\\\\");
		else 
			putchar(ch);
	}			
} 
