//将一个输入复制到输出，并将其中连续的多个空格用一个空格代替 
#include<stdio.h>
main() {
	
	int temp = 0;
	int ch;
	
	//使用temp做一个标记，通过temp记录空格个数，如果等于1，则打印一个空格，反之全部用"" 替代 
	while( (ch = getchar()) != EOF ) {
		if(ch == ' '){
			temp ++;
			//这里注意当temp == 1的时候，我们就需要打印一个空格，如果 temp > 1，则全部用"" 替代 
			if(temp == 1) {
				printf(" ");
			}else {
				printf("");
			} 
		}
		if(ch != ' ' ) {
			temp = 0;
			printf("%c", ch);
		}
	} 
}

