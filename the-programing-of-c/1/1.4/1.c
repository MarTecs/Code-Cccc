#include<stdio.h>


/*
 	���帺�ų���
	ͨ��ʹ�ô�д��ĸƴд��������ĩβû�зֺ� 
*/

#define LOWER 0
#define UPPER 300
#define STEP 20
#define A 'A'




main() {
	int fahr;
	for ( fahr = LOWER; fahr <= UPPER; fahr += STEP) {
		printf("\t%3d\t%6.2f\n", fahr, (5.0/9.0) * (fahr - 32));
	}
} 
