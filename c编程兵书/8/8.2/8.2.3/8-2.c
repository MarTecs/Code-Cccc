#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i = 10, j;
	int *pf;
	pf = &i;
	j = *pf;
	printf("i=%d\tj=%d\n",i,j);
	printf("%d\n",pf);
	printf("%d\n",&i);
	
	system("pause");
	return 0;
}
