#include<stdio.h>
#include<stdlib.h>

int stack[50],top=-1;

void push()
{
int n;
if(top==50)
	printf("stack full!");
else
{
printf("enter the number to be inserted :");
scanf("%d",&n);
top++;
stack[top]=n;
}
}

int pop()
{
int n;
if(top==-1)
	printf("stack empty!");
else
	{
	int n;
	n=stack[top];
	top--;
	return(n);
	}
}

void display()
{
int i;
printf("\n\n");
for(i=top;i>=0;i--)
	{
	printf("%d\n",stack[i]);
	}
}

void main()
{
int menu,i,n;
while(1)
{
printf("1.push\n2.pop\n3.display\n4.exit\n");
scanf("%d",&menu);
switch(menu)
{
case 1:
	push();
	break;
case 2:
	n=pop();
	printf("\n%d\n",n);
	break;
case 3:
	display();
	break;
case 4:
	exit(0);
	break;
default:
	printf("invalied input!");
}
}
}
