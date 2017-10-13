#include<stdio.h>
int main() {
	
	
	int a[4][5], i;
	int *p;
	p = a[0];
	for ( i = 0; i < 20; i++ ) {
		*p++ = i;
	}
	
	
	
	//如果删除下面这行程序，将不会得到正确结果，请读者思考一下为什么? (参考自己写的如下代码)
	/*
	printf("数组的首地址为%d\n", a[0]);
	printf("p的值为:%d\n", *(p-1));
	printf("二维数组的值为:");
	*/
	
	
	p = a[0];
	for ( i = 0; i < 20; i++ ) {
		if ( i % 5 == 0 ) {
			printf("\n");
		} 
		
		printf("%4d ", *p++);
	}
	
	
	return 0;
	
} 
