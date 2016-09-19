#include<stdio.h>




int main()
{	int a=3;
	int b=5;
	int *p=&b;
	int **q=&p;
	*q=&a;
	printf("%d",*q);
}