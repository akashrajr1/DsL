#include <stdio.h>

#define max 20

instRight(int queue[],int * insRight,int insLeft,int element)
{
	if(*insRight-1==insLeft)
		{printf("Queue is full\n");
		 return;}
	queue[--(*insRight)]=element;
}

instLeft(int queue[],int * insLeft,int insRight,int element)
{
	if(*insLeft+1==insRight)
	{
		printf("Queue is full\n");
		return;
	}
	queue[++(*insLeft)]=element;
}

deleRight(int queue[],int * delRight,int * insRight)
{
	if(*delRight==*insRight)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Element deleted is %d\n",queue[--(*delRight)]);
	if(*delRight==*insRight)
		{*delRight=max;
		 *insRight=max;}

}

deleLeft(int queue[],int *delLeft,int * insLeft)
{
	if(*delLeft==*insLeft)
	{
		 printf("Queue is empty\n");
		 return;
	}
	printf("Element deleted is %d\n",queue[++(*delLeft)]);
	if(*delLeft==*insLeft)
	{
		*delLeft=-1;
		*insLeft=-1;
	}
}

display(int queue[])
{
	int i=0;
	for(i=0;i<max;i++)
		printf("%d ",queue[i] );
}



void main(){
	int queue[max]={0};
	int insRight=max,insLeft=-1;
	int delRight=max,delLeft=-1;
	int i=0,element,j;
	while(i!=6)
	{printf("\nEnter choice\n1. Insert Right\n2. Insert Left\n3. Delete Right\n4. Delete Left\n5. Display\n6. Exit\n");
	 scanf("%d",&i);
	 switch(i)
	 {
	 	case 1: printf("Enter element\n");
	 			scanf("%d",&element);
	 			instRight(queue,&insRight,insLeft,element);
	 			break;
	 	case 2: printf("Enter element\n");
	 			scanf("%d",&element);
	 			instLeft(queue,&insLeft,insRight,element);
	 			break;
	 	case 3: deleRight(queue,&delRight,&insRight);
	 			break;
	 	case 4: deleLeft(queue,&delLeft,&insLeft);
	 			break;
	 	case 5:	display(queue);
	 	case 6:;
	 }
	}
}