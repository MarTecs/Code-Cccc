#include<stdio.h>
/*��һ�����븴�Ƶ�������������������Ķ���ո���һ���ո���� */
main() {
	
	//ʹ��temp��һ����ǣ������һ��Ϊ�ո�֮��û�пո�Ϊ0����֮��1 
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
