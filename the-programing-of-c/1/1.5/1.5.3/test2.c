#include<stdio.h>
/*
��һ�����븴�Ƶ�������������е��Ʊ���滻Ϊ\t,�ѻ��˷����滻Ϊ\b������б���滻Ϊ\\ 
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
