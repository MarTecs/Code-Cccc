#include<stdio.h>

/*
	文件复制 
*/
main() {
	
	/*
		方法一：文件复制，我们采用流的方法进行读取，如果读取到的输入字符为EOF，说明读取结束 
	*/
	/*
	int c = getchar();
	while(c != EOF) {
		putchar(c);
		c = getchar();
	}
	*/
	
	
	
	/*
		方法二：简化方法一的代码 
	*/
	int d;
	while ( (d = getchar()) != EOF ) {
		putchar(d);
	}
	
} 
