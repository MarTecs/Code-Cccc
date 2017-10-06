#include<stdio.h>
main () {
	
	float fahr, celsius;
	float lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	while ( fahr <= upper ) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		//%3.0f表示至少占3个字符宽度，并且不包括小数点和小数部分 
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
		
	}
	
} 
