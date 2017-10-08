#include<stdio.h>
/*将一个输入复制到输出，并将其中连续的多个空格用一个空格代替 */
main() {
	
	//使用temp做一个标记，如果第一个为空格，之后没有空格为0。反之加1 
	int temp = 0;
	
	int ch;
	while( (ch = getchar()) != EOF ) {
		if(ch == ' ')
			temp ++;
		if(ch != ' ' ) {
			temp = 0;
			print("%c", ch);
		}
			
	} 
	
	printf("\n");
	
}
