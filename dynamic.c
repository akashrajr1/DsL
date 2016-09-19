#include<stdio.h>
#include<stdlib.h>

d1(int **t,int n)
{int i=0,j=0;
	*t = calloc(n,sizeof(int));
	
}

d2(int ***p,int n)
{

	int i=0,j=0;
	**p = calloc(n,sizeof(int *));

	for(i=0;i<n;i++)
		**(p+i)=calloc(n,sizeof(int));
	
}

void main()
{
	
int * k ;
d1(&k,10);
printf("Working" );
int ** p;
d2(&p,10);	
// 	printf("%d",p[7][9] );
	
	
	
}