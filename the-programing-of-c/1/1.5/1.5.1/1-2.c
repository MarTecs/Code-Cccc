#include<stdio.h>

/*
	�ļ����� 
*/
main() {
	
	/*
		����һ���ļ����ƣ����ǲ������ķ������ж�ȡ�������ȡ���������ַ�ΪEOF��˵����ȡ���� 
	*/
	/*
	int c = getchar();
	while(c != EOF) {
		putchar(c);
		c = getchar();
	}
	*/
	
	
	
	/*
		���������򻯷���һ�Ĵ��� 
	*/
	//������������d��ʱ�򣬱��������ﵽ���Դ��getchar�������ص��κ�ֵ 
	int d;
	while ( (d = getchar()) != EOF ) {
		putchar(d);
	}
	
} 
