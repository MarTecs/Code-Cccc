#include<stdio.h>
main() {
	
	int fahr, celsius;				//�����϶ȣ����϶� 
	int lower, upper, step;
	lower = 0;						//�¶ȱ������ 
	upper = 300;					//�¶ȱ������ 
	step = 20;						//���� 
	
	fahr = lower;
	while ( fahr <= upper ){
		celsius = 5 * ( fahr - 32 ) / 9;
		printf("%d\t%d\n", fahr, celsius);
		/*
		������������۲������´�ʩ��ָ����ӡ��ȣ���ӡ�����ֽ����Ҷ��룬
		fahr����ռ��3�����ֿ�ȣ��Ҷ��� 
		celsius����ռ�� 6�����ֿ�ȣ��Ҷ��� 
		
		*/
		printf("%3d\t%6d\n", fahr, celsius);
		fahr = fahr + step;
	}
} 
