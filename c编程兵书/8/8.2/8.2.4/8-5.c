#include<stdio.h>
int main() {
	
	int i,j;
	int *pmax,*pmin,*pt;
	
	printf("����������������");
	scanf("%d%d",&i,&j);
	pmax = &i;
	pmin = &j;
	
	if(*pmax < *pmin)
	{
		pt = pmax;
		pmax = pmin;
		pmin = pt;
	}
	
	printf("�����ֵΪ��i=%d,j=%d\n",i,j);
	printf("���ֵΪ��%d,��СֵΪ��%d\n", *pmax, *pmin);
	
	return 0;
}
