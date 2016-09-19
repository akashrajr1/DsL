#include<stdio.h>
#include<stdlib.h>

main()
{
	int **a;
	int i,width,j;
	printf("Enter width ");
	scanf("%d",&width);
	a= (int ** )calloc(width+1,sizeof(int *));
	for(i=0;i<width;i++)
	{
		printf("Enter row size");
		int r;
		scanf("%d",&r);
		a[i]=(int *)calloc(r+1,sizeof(int));
		printf("Enter elements");
		for(j=0;j<r;j++)
			scanf("%d",&a[i][j]);
		a[i][j]=NULL;
	}
	a[i]=NULL;
	i=0;
	while(a[i]!=NULL)
		{j=0;
			while(a[i][j]!=NULL)
			{printf("%d",a[i][j]);
			 j++;}
		 i++;
		 printf("\n");}
}