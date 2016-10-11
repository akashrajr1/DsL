#include <stdio.h>

#define max 5

void push(int queue[],int front[],int rear[],int element,int n)
{
		int Max[2];
		Max[0]=rear[1];
		Max[1]=

			if(n==1)
			{
				if(front[0]==-1)
					front[0]++;

				
				rear[0]=rear[0]+1;
				if(rear[0]>Max[0])
					rear[0]-=Max;
				if(rear[0]==front[0])
					{printf("Queue is full\n");
						return;}
				queue[rear[0]]=element;
			}

			if(n==2)

			
}


void main()
{
	int front[2]={-1,max},rear[2]={-1,max};
	int queue[max]={0};
	int i=0,element,n,j=0;
	while(i!=5)
		{printf("\n1.Push\n2.Delete\n3.Display\n4.Display Array\n5.Exit\n");
		 scanf("%d",&i);
		 if(i!=5 && i!=4)
		 {printf("Enter queue number\n");
         scanf("%d",&n);}
		 switch(i)
		 {
		 	case 1: printf("Enter element\n");
		 			scanf("%d",&element);
		 			push(queue,front,rear,element,n);
		 			break;
		 	case 2: dqueue(queue,front,rear,n);
		 			break;
		 	case 3: display(queue,front,rear,n);
		 			break;
		 	case 4: for(j=0;j<max;j++)
		 			printf("%d ",queue[j]);
		 	default:;
		 }


		}

}