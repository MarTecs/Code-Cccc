//��һ�����븴�Ƶ�������������������Ķ���ո���һ���ո���� 
#include<stdio.h>
main() {
	
	int temp = 0;
	int ch;
	
	//ʹ��temp��һ����ǣ�ͨ��temp��¼�ո�������������1�����ӡһ���ո񣬷�֮ȫ����"" ��� 
	while( (ch = getchar()) != EOF ) {
		if(ch == ' '){
			temp ++;
			//����ע�⵱temp == 1��ʱ�����Ǿ���Ҫ��ӡһ���ո���� temp > 1����ȫ����"" ��� 
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

