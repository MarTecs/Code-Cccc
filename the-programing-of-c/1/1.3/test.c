#include<stdio.h>

//逆序打印温度转换表 
main() {
	
	float fahr;
	for ( fahr = 300; fahr >= 0; fahr = fahr - 20 ) {
		
		printf("\t%6.2f\t%6.2f\n", fahr, (5.0/9.0) * (fahr - 32));
	} 
	
	 
}
