#include<stdio.h>
main () {
	
	float fahr, celsius;
	float lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	while ( fahr <= upper ) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		//%3.0f��ʾ����ռ3���ַ���ȣ����Ҳ�����С�����С������ 
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
		
	}
	
} 
