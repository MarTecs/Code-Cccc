#include<stdio.h>
main() {
	
	int fahr, celsius;				//华摄氏度，摄氏度 
	int lower, upper, step;
	lower = 0;						//温度表的下限 
	upper = 300;					//温度表的上限 
	step = 20;						//步长 
	
	fahr = lower;
	while ( fahr <= upper ){
		celsius = 5 * ( fahr - 32 ) / 9;
		printf("%d\t%d\n", fahr, celsius);
		/*
		对于输出不美观采用如下措施：指明打印宽度，打印的数字将会右对齐，
		fahr将会占用3个数字宽度，右对齐 
		celsius将会占用 6个数字宽度，右对齐 
		
		*/
		printf("%3d\t%6d\n", fahr, celsius);
		fahr = fahr + step;
	}
} 
