#include<stdio.h>
main () {
	printf("\t�����϶�\t���϶�׼����\n");
	float fahr, celsius;
	float lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	
	while(fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("\t%6.0f\t%15.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
} 
