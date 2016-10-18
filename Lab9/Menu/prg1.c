#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int c;
int e;
struct node * next;
}* Node;

Node insert(Node Head,int c,int e)
{   (Head->e)++;
    (Head->c)++;
    Node cur=Head, temp = malloc(sizeof(struct node));
    temp->c=c;
    temp->e=e;
    temp->next=NULL;
    while(cur->next!=Head)
        cur=cur->next;
    cur->next=temp;
    temp->next=Head;
    return Head;
}

display(Node Head)
{
    Node cur=Head->next;
    while(cur!=Head)
        {   printf("%dx^%d + ",cur->c,cur->e);
            cur=cur->next;}
}

Node subtract(Node HeadA,Node HeadB,char c)
{
    Node HeadC=malloc(sizeof(struct node));
    HeadC->c=0;
    HeadC->e=0;
    HeadC->next=HeadC;
    Node curA=HeadA->next;
    Node curB=HeadB->next;
    while(curA!=HeadA && curB!=HeadB)
    {
        if((curA->e)==(curB->e))
        {   if(c=='-')
            HeadC=insert(HeadC,(curA->c)-(curB->c),(curA->e));
            else if(c=='+')
             HeadC=insert(HeadC,(curA->c)+(curB->c),(curA->e));
            curA=curA->next;
            curB=curB->next;}
        else if((curA->e)>(curB->e))
        {
            HeadC=insert(HeadC,(curA->c),(curA->e));
            curA=curA->next;
        }
        else
        {
            HeadC=insert(HeadC,(curB->c),(curB->e));
            curB=curB->next;
        }
    }

    while(curA!=HeadA){
        HeadC=insert(HeadC,(curA->c),(curA->e));
        curA=curA->next;
    }

    while(curB!=HeadB){
        HeadC=insert(HeadC,(curB->c),(curB->e));
        curB=curB->next;
    }
    return HeadC;
}

Node multiply(Node HeadA,Node HeadB)
{
    Node curA=HeadA->next;
    Node curB=HeadB->next;
    Node * arr=(Node *)calloc(HeadB->e,sizeof(Node));
    int i=0;
    for(;i<HeadB->e;i++)
    {
        arr[i]=malloc(sizeof(struct node));
        arr[i]->c=0;
        arr[i]->e=0;
        arr[i]->next=arr[i];
    }
    i=0;
    for(;i<HeadB->e;i++)
    {
        while(curA!=HeadA)
        {
            arr[i]=insert(arr[i],curB->c*curA->c,curB->e+curA->e);
            curA=curA->next;
        }
        curA=HeadA->next;
        curB=curB->next;
    }
    i=0;
    for(;i<HeadB->e-1;i++)
        {arr[i+1]=subtract(arr[i],arr[i+1],'+');}
    return arr[HeadB->e-1];

}

void main()
{



    int choice=0;
    while(choice!=4)
    {printf("Enter choice\n1.Input\n2.Subtract\n3.Multiply\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:    Node HeadA=malloc(sizeof(struct node));
    HeadA->c=0;
    HeadA->e=0;
    HeadA->next=HeadA;
    int n,c,e;
    printf("Enter length of polynomial A\n");
    scanf("%d",&n);
    while(n>0){
        n--;
        printf("Enter (Coeff & Exp)\n");
        scanf("%d",&c);
        scanf("%d",&e);
        HeadA=insert(HeadA,c,e);
    }
    display(HeadA);

    Node HeadB=malloc(sizeof(struct node));
    HeadB->c=0;
    HeadB->e=0;
    HeadB->next=HeadB;
    printf("\nEnter length of polynomial B\n");
    scanf("%d",&n);
    while(n>0){
        n--;
        printf("Enter (Coeff & Exp)\n");
        scanf("%d",&c);
        scanf("%d",&e);
        HeadB=insert(HeadB,c,e);
    }
    display(HeadB);
        break;
    case 2:    printf("\nSubtracted\n");
    Node HeadC=subtract(HeadA,HeadB,'-');
    display(HeadC);
    break;
    case 3:    printf("\nMultiplied\n");
    Node HeadD=multiply(HeadA,HeadB);
    display(HeadD);
    default:;
}
    }
}
