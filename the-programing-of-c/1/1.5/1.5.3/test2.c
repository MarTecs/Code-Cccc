#include<stdio.h>
/*
��һ�����븴�Ƶ�������������е��Ʊ���滻Ϊ\t,�ѻ��˷����滻Ϊ\b������б���滻Ϊ\\ 
*/
main() {
	char ch = 0;
	
	while( (ch = getchar()) != EOF ) {
		if(ch = '\t')
			printf("%c",ch);
//			ch = '\\t';
		if(ch = '\b')
			printf("%c",ch);	
//			ch = '\\b';
		if(ch = '\\')
			printf("%c",ch);
//			ch = '\\\\';
		printf('%c',ch);
	}
	
	
	
} 
