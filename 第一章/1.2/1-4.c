#include<stdio.h>
//���϶� = ��5/9�� * �������϶� - 32��

//�����¶� - > �������¶� 
main() {
	
	printf("\t���϶�\t�������¶�\n");
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
