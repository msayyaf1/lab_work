#include<stdio.h>
#include<stdlib.h>

int queue[50],front=-1,rear=-1;

void insert()
{
int n;
if(rear==50)
	printf("queue is full !");
else
{
printf("enter the number to be inserted :");
scanf("%d",&n);
if(front=-1)
	front=0;
rear++;
queue[rear]=n;
}
}

int delete()
{
int n;
if(front>rear)
	{
	printf("queue is empty !");
	front=-1;
	rear=-1;
	}
else
	{
	n=queue[front];
	front++;
	return(n);
	}
}

void display()
{
int i;
for(i=front;i<=rear;i++)
{
printf("%d\t",queue[i]);
}
printf("\n");
}

	
void main()
{
int menu,a;
while(1)
{
printf("1.insert\n2.delete\n3.display\n4.exit\n");
scanf("%d",&menu);
switch(menu)
{
case 1:
	insert();
	break;
case 2:
	a=delete();
	printf("\n%d\n",a);
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
