#include<stdio.h>
//编写一个打印EOF值的程序
//由于EOF在标准库宏定义中为-1，所以直接使用 
main() {
	int c = getchar();
	putchar(c); 
	printf("%d\n",EOF);
} 
