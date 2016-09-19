#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 10
int p(char c)
{
if(c=='(')
	return 0;
if(c=='+'||c=='-')
	return 1;
if(c=='*'||c=='/'||c=='%')
	return 2;
}

void push(char stack[],int * top,char c)
{
	if(*top==max-1)
		printf("Overflow");
	stack[++(*top)]=c;
}

char pop(char stack[],int * top)
{
	if(*top==-1)
		printf("Underflow");
	return stack[(*top)--];
}


main() {
char post[max],in[max],stack[max];
int i=0,j=0,top=-1;
printf("Enter infix\n");
scanf("%s",in);
for(i=0;i<strlen(in);i++)
{
	char c=in[i];
	if(isalnum(c))
	
		post[j++]=c;

	else if(top==-1 || c=='(')
		push(stack,&top,c);
	else if(c==')')
	{
		while(stack[top]!='(')
			post[j++]=pop(stack,&top);
		char w=pop(stack,&top);
	}
	else 
	{	
		while(p(stack[top])>=p(c))
			post[j++]=pop(stack,&top);
		push(stack,&top,c);
			
	}

}
	while(top>-1)
		post[j++]=pop(stack,&top);

	printf("%d\n",j);

	for(i=0;i<strlen(in);i++)
	printf("%c",post[i]);
	
	

}