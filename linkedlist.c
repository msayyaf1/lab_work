#include<stdio.h>
struct node
{
int num;
struct node *link;
};
void main()
{
struct node *start=NULL,*new,*temp;
int p,n,flag=0;
printf("1.insert at the begining\n2.insert at the end\n3.insert after an element\n4.insert before an element\n5.delete first element\n6.delete last element\n7.delete node before an element\n8.delete node after an element\n9.traverse list(print)\n");
scanf("%d",&menu);
switch(menu)
{
case 1:
	new=(struct node*)malloc(struct node);
	printf("enter the element :");
	scanf("%d",&n);
	new->num=n;
	if(start==NULL)
		{
		start=new;
		new->link=NULL;
		}
	else
		{
		new->link=start;
		start=new;
		}
	break;
case 2:
	new=(struct node*)malloc(struct node);
	printf("enter the element :");
	scanf("%d",&n);
	temp=start;
	new->num=n;
	new->link=NULL;
	if(temp==NULL)
		{
		start=new;
		}
	else
		{
		while(temp->link!=NULL)
			{
			temp=temp->link;
			}
		temp->link=new;
		}
	break;
case 3:
	if(start==NULL)
		printf("list is empty.");
	else
		{
		printf("enter the number :");
		scanf("%d",&n);
		printf("enter the element after which new element is to be inserted :");
		scanf("%d",&p);
		temp=start
		while(temp->link!=NULL)
			{
			if(temp->num==p)
				{
				flag++;
				break;
				}
			temp=temp->link;
			}
		if(flag!=0)
			{
			new=(struct node*)malloc(struct node);
			new->num=n;
			new->link=temp->link;
			temp->link=new;
			}
		else
			{
			printf("no such element exists.");
			}
	break;
case 4:
	if(start==NULL)
		printf("list is empty.");
	else
		{
		
