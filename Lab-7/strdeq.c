#include <stdio.h>
#include <string.h>

#define max 20

instRight(char queue[][20],int * insRight,int insLeft,char element[max])
{
	if(*insRight-1==insLeft)
		{printf("Queue is full\n");
		 return;}
	strcpy(queue[--(*insRight)],element);
}

instLeft(char queue[][20],int * insLeft,int insRight,char element[max])
{
	if(*insLeft+1==insRight)
	{
		printf("Queue is full\n");
		return;
	}
	strcpy(queue[++(*insLeft)],element);
}


// deleLeft(char queue[][20],int *delLeft,int * insLeft,int *insRight)
// {
	
// 	if(*delLeft>*insLeft)
// 		*insLeft=-1;
// 	if((*delLeft==*insLeft && (*insRight-(*insLeft))!=1) || *delLeft==max-1)
// 	{
// 		 printf("Queue is empty\n");
// 		 return;
// 	}
// 	printf("Element deleted is %s\n",queue[++(*delLeft)]);
// 	if(*delLeft==*insLeft && (*insRight-*insLeft)!=1 || *delLeft==max-1)
// 	{
// 		*delLeft=-1;
// 		*insLeft=-1;
// 		//The case where the array is full and all elements are deleted by deleLeft
// 		if(*delLeft==max-1)
// 			*insRight=max;
// 	}
// }


// deleLeft(char queue[][20],int *delLeft,int * insLeft,int *insRight)
// {
// 	if(strcmp(queue[*delLeft+1],"")==0 || *delLeft==*insLeft)
// 	{	printf("Queue is empty\n");
// 		*delLeft=-1;
// 		return;}

// 	printf("Element deleted is %s\n",queue[++(*delLeft)]);
// 	if(*delLeft==*insLeft)
// 		*insLeft=-1;
// 	if(*delLeft==max-1)
// 		{*delLeft=-1;
// 			*insRight=-1;}
// }

deleLeft(char queue[][20],int *delLeft,int * insLeft)
{
	if(*delLeft==*insLeft)
	{
		 printf("Queue is empty\n");
		 return;
	}
	printf("Element deleted is %s\n",queue[++(*delLeft)]);
	if(*delLeft==*insLeft)
	{
		*delLeft=-1;
		*insLeft=-1;
	}
}


display(char queue[][20])
{
	int i=0;
	for(i=0;i<max;i++)
		printf("%s ",queue[i] );
}



void main(){
	char queue[max][20];
	int insRight=max,insLeft=-1;
	int delLeft=-1;
	int i=0,j;
	char element[20],dummy;

	for(j=0;j<max;j++)
		strcpy(queue[j],"");
	while(i!=5)
	{printf("\nEnter choice\n1. Insert Right\n2. Insert Left\n3. Delete Left\n4. Display\n5. Exit\n");
	 scanf("%d",&i);
	 scanf("%c",&dummy);
	 switch(i)
	 {
	 	case 1: printf("Enter element\n");
	 			gets(element);
	 			instRight(queue,&insRight,insLeft,element);
	 			break;
	 	case 2: printf("Enter element\n");
	 			gets(element);
	 			instLeft(queue,&insLeft,insRight,element);
	 			break;
	 	case 3: deleLeft(queue,&delLeft,&insLeft);
	 			break;
	 	case 4:	display(queue);
	 	case 5:;
		}
	}
}