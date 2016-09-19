#include<stdio.h>

#define max 3

void push(int *r,int *f,int cqueue[],int element)
{
	*r=(*r+1)%max;
	if(*f==-1)
		*f=0;
	if(*r+1==*f || *f==0 && *r==max)
		{printf("Queue is full");
		 return;}
	
	cqueue[*r]=element;
}

int del(int *r,int *f,int cqueue[])
{
	if(*f!=-1 && *f!=0 && *f==*r)
		{printf("Queue is empty");
			return;}
	if(*f==-1)
		{printf("Underflow");
			return;}
	*f=(*f+1)%max;
	return cqueue[(*f)-1];

}

display(int r,int f,int cqueue[])
{
	if(f==-1)
		{printf("Queue empty");
			return;}
	int i=f;
	for(;i<r-f+1;i=i+(f+1)%max)
		printf("%d",cqueue[i]);
}
void main()
{
	int f=-1,r=-1;
	int cqueue[max];
	int i=1,ele;
	while(i!=4)
	{
		printf("Enter choice\n1.Push\n2.Delete\n3.Display\n4.Exit");
		scanf("%d",&i);
		switch(i)
		{
			case 1:printf("Enter element");
					scanf("%d",&ele);
					push(&f,&r,cqueue,ele);
					break;
			case 2: if(f<=r)
					printf("Element delted is %d",del(&f,&r,cqueue));
					else
						printf("Empty queue\n");
					break;
			case 3:printf("\nPrinting elements\n");
					display(f,r,cqueue);
					break;
			case 4:;
		}
	}
}