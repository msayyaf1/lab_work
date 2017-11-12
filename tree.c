#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{
 int DATA; 
 struct node *llink;
 struct node *rlink;
}*root=NULL,*ptr1=NULL,*ptr=NULL;


void ins(int n){
 int flag,item;
if (root==NULL){
   struct node *new;
   new=(struct node *)malloc(sizeof(struct node));
   new->DATA=n;
   new->llink=NULL;
   new->rlink=NULL;}
else{
ptr=root;
flag=0;
item=n;
while(ptr!=NULL && flag==0){
     if (item=ptr->DATA)
              flag=1;
     else if(item=ptr->DATA){
              ptr1=ptr; 
              ptr=ptr->llink; }
     else{
              ptr1=ptr;
              ptr=ptr->rlink;}
}
if (flag==1)
   printf("Item already exists");
else{
   struct node *new;
   new=(struct node *)malloc(sizeof(struct node));
   new->DATA=n;
   new->llink=NULL;
   new->rlink=NULL;
   if (item<ptr1->DATA)
         ptr1->llink=new;
   else
         ptr1->rlink=new;
}}}
  
   
                            
void del(int n){
int flag,item;
ptr=root;
flag=0;
item=n;
while(ptr!=NULL && flag==0){

   if(item<ptr->DATA){
            ptr1=ptr;
            ptr=ptr->llink;} 
   else if(item>ptr->DATA){
            ptr1=ptr;
            ptr=ptr->rlink;} 
   else if(item=ptr->DATA){
             flag=1;
             ptr1=ptr;}
}
if (flag==1){
    ptr1=ptr;
    if(ptr1->llink=ptr)
           ptr->llink=NULL;
    else
           ptr1->rlink=NULL;
}}

void search(int n){
   int flag,item,menu;
   ptr=root;
   ptr1=ptr;
   flag=0;
   item=n;
   while(ptr!=NULL && flag==0){

   	if(item<ptr->DATA){
            ptr1=ptr;
            ptr=ptr->llink;} 
   	else if(item>ptr->DATA){
            ptr1=ptr;
            ptr=ptr->rlink;} 
   	else{
             flag=1;
             ptr1=ptr;}     }
if(flag==1)
   printf("Item is found\n");
else
  printf("Item is not found\n");
}

void main(){
int num,delnum,ser,menu;
while(1){
printf("1-Insert \n 2-Delete \n 3-Search \n 4-Exit");
scanf("%d",&menu);


switch(menu){
	case 1:
                printf("Enter the number to be inserted");
                scanf("%d",&num);
                ins(num);
                break;
        case 2:
                printf("Enter the number to be deleted");
                scanf("%d",&delnum);
                del(delnum);
                break;
        case 3:
                printf("Enter the number to be searched");
                scanf("%d",&ser);
                search(ser);
                break;
        case 4:
                exit(0);
                
            } 
}}
   
              
