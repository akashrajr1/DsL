#include<stdio.h>
#include<string.h>
#define size 20
int priority(char ch)
{
    if(ch=='(')
        return 0;
    if(ch=='+'||ch=='-')
        return 1;
    if(ch=='*'||ch=='/')
        return 2;

}
void push(char stacks[],int *top,char ch)
{
    if(*top==size-1)
        printf("\n Overflow");
    else
        stacks[++(*top)]=ch;
}
int pop(char stacks[],int *top)
{   int e;
    if(*top==-1)
        printf("\n Underflow");
    else
       return stacks[(*top)--];
}
int main()
{
    int top=-1,i=0,j=0;
    char postfix[20],ch,infix[20],stacks[size];
    printf("\n Enter infix ");
    scanf("%s",infix);
    for(i=0;i<strlen(infix);i++)
    {
        ch=infix[i];
        if(isalnum(ch))
            postfix[j++]=ch;
           else if(ch=='(')
                    push(stacks,&top,ch);
           else if(ch==')')
                    {
                        while(ch!='('&&top!=-1)
                                postfix[j++]=pop(stacks,&top);
                            
                    }
           else
                 	
                {
                    while(priority(stacks[top-1])>=priority(ch))
                        push(stacks,&top,ch);  }
        while(top!=-1)                  
           	postfix[j++]=pop(stacks,&top);
    }
   	
    for(i=0;i<strlen(infix);i++)
        printf("%c",postfix[i]);
    return 0;
}
