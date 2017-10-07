#include<stdio.h>


/*
 	定义负号常量
	通常使用大写字母拼写，并且行末尾没有分号 
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
