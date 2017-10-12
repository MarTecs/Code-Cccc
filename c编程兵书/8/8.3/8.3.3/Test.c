#include<stdio.h>
int main () {
	
	int a = 5, b = 6;
	int *p1 = &a, *p2 = &b;
	p2 = p1;
	*p2 = *p1;
	
} 
