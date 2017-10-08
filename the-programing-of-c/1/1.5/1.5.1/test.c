#include<stdio.h>

//验证表达式getchar() != EOF 的值是1还是0 
main() {
	
	//只有在 ctrl + z 的时候才会返回一个0 
	printf("%d\n",getchar() != EOF);
	
}
