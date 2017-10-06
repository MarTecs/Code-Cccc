#include<stdio.h>
//摄氏度 = （5/9） * （华摄氏度 - 32）

//摄氏温度 - > 华摄氏温度 
main() {
	
	printf("\t摄氏度\t华摄氏温度\n");
	float falur, celsius;
	float upper, lower, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	while(falur <= upper){
		falur = celsius * 9.0 / 5.0 + 32;
		printf("\t%5.0f\t%8.2f\n", falur, celsius);
		celsius += step;
	}
}
