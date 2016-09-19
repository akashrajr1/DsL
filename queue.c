#include<stdio.h>
#include<stdlib.h>

#define max 3

void push(int *f,int *r,int queue[],int ele)
{
	if(*f==-1)
		(*f)++;
	if(*r==max-1)
		printf("Overflow");
	else
		queue[++(*r)]=ele;
	

}

int dque(int *f,int *r,int queue[])
{
	if(*f>*r)
		printf("Underflow");
	else
		return queue[(*f)++];
	

}

display(int f,int r,int queue[])
{
	int i=f;
	for(;i<=r;i++)
		printf("%d ",queue[i] );
}
main()
{
	int f=-1,r=-1;
	int queue[max];
	int i=1,ele;
	while(i!=4)
	{
		printf("Enter choice\n1.Push\n2.Delete\n3.Display\n4.Exit");
		scanf("%d",&i);
		switch(i)
		{
			case 1:printf("Enter element");
					scanf("%d",&ele);
					push(&f,&r,queue,ele);
					break;
			case 2: if(f<=r)
					printf("Element delted is %d",dque(&f,&r,queue));
					else
						printf("Empty queue\n");
					break;
			case 3:printf("\nPrinting elements\n");
					display(f,r,queue);
					break;
			case 4:;

		}
	}
}