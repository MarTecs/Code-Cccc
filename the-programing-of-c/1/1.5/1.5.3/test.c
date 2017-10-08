#include<stdio.h>
//count the number of \n \t and blank spaces 
main() {
	char ch ;
	//count1代表换行符，count2代表制表符，count3代表空格个数 
	int count1 = 0,count2 = 0,count3 = 0;
	while( (ch=getchar()) != EOF) {
		if(ch == '\n')
			count1++;
		if(ch == '\t') 
			count2++;
		if(ch == ' ')
			count3++;
	} 
	printf("换行符有%d个，制表符有%d个，空格有%d个 \n", count1, count2, count3);
	
} 
