#include<stdio.h>
//count the number of \n \t and blank spaces 
main() {
	char ch ;
	//count1�����з���count2�����Ʊ����count3����ո���� 
	int count1 = 0,count2 = 0,count3 = 0;
	while( (ch=getchar()) != EOF) {
		if(ch == '\n')
			count1++;
		if(ch == '\t') 
			count2++;
		if(ch == ' ')
			count3++;
	} 
	printf("���з���%d�����Ʊ����%d�����ո���%d�� \n", count1, count2, count3);
	
} 
