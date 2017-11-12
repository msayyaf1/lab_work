#include<stdlib.h>
#include<malloc.h>
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

struct node   //Representation of a node
{
        int num;
        struct node *link; // struct node enna datatypeilekk point cheyyunna pointeran link
};
struct node *start=NULL;
int main()      
{
        int choice;
        while(1){           // while 1 means while true
                printf("\n        LINKED LIST OPERATIONS       \n");
                printf("\n                MENU                             \n");
                printf("\n 1.Create     \n");
                printf("\n 2.Display    \n");
                printf("\n 3.Insert at the beginning    \n");
                printf("\n 4.Insert at the end  \n");
                printf("\n 5.Insert at specified position       \n");
                printf("\n 6.Delete from beginning      \n");
                printf("\n 7.Delete from the end        \n");
                printf("\n 8.Delete from specified position     \n");
                printf("\n 9.Exit       \n");
                printf("\n              ------           \n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3: 
                                        insert_begin();
                                        break;
                        case 4:
                                        insert_end();
                                        break;
                        case 5:
                                        insert_pos();
                                        break;
                        case 6:
                                        delete_begin();
                                        break;
                        case 7:
                                        delete_end();
                                        break;
                        case 8:
                                        delete_pos();
                                        break;
                        case 9:
                                        exit(0);
                                        break;
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }
        }
        return 0; //since the function main has a return type int
}
void create() // Function to create a new node
{
        struct node *temp,*ptr; 
        temp=(struct node *)malloc(sizeof(struct node));  // statement for dynamic memory allocation of a node
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                exit(0);   
        }
        printf("\nEnter the data value for the node:\t"); // For reading the value of a node
        scanf("%d",&temp->num);
        temp->link=NULL;                        // The link to the link node is as null
        if(start==NULL)                         //Checking if it is first node
        {
                start=temp; //To set the starting address in start(basically linking the firt node to start address. 	
        }
        else
        {
                ptr=start;
                while(ptr->link!=NULL)                     //link is the link field of the node
                {
                        ptr=ptr->link; // For traversing b/w nodes
                }
                ptr->link=temp; //Linking existing node's address to the new node 
        }
}
void display()
{
        struct node *ptr; //Declaring a node pointng to the structure variable
        if(start==NULL)
        {
                printf("\nList is empty:\n");
                return;
        }
        else
        {
                ptr=start;  //start contains the address of the first node 
                printf("\nThe List elements are:\n");
                while(ptr!=NULL)
                {
                        printf("%d\t",ptr->num );
                        ptr=ptr->link ; //traversing
                }
        }
}
void insert_begin() //inserting a node at the beginning of the linked list
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&temp->num);
        temp->link =NULL; //Setting the link of temp to null
        if(start==NULL)
        {
                start=temp; 
        }
        else
        {
                temp->link=start; //Linking the new node to start;where start is the address of the first node
                start=temp;// removing start's link to the firt node
        }
}
void insert_end() //inserting a node at the beginning of the list
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&temp->num );
        temp->link =NULL; 
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->link !=NULL)
                {
                        ptr=ptr->link ;
                }
                ptr->link =temp;   //THe link of the last node is set to temp
        }
}
void insert_pos() //inserting a node at a specific function.
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the position for the new node to be inserted:\t");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node:\t");
        scanf("%d",&temp->num);
        temp->link=NULL;
        if(pos==0) //if the user set the position to beginning  
        {
                temp->link=start; //setting the link field of temp to start
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++)
                {
                        ptr=ptr->link; //travering the linked list
                        if(ptr==NULL)
                        {
                                printf("\nPosition not found\n");
                                return;
                        }
                }
                temp->link =ptr->link; //Here we are setting the link field of the new node(temp) to position where the link field of node at the poition points too. 
                ptr->link=temp;
        }
}
void delete_begin() //To delete from the beginning
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("\nList is Empty:\n");
                return;
        }
        else
        {
                ptr=start;
                start=start->link;
                printf("\nThe deleted element is :%d\t",ptr->num);
                free(ptr); //for removing the deleted node from memory
        }
}
void delete_end() //To delete from the end
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nList is Empty:");
                exit(0);
        }
        else if(start->link==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is:%d\t",ptr->num);
                free(ptr); //for deallocating the memory
        }
        else
        {
                ptr=start;
                while(ptr->link!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->link;
                }
                temp->link=NULL; //setting the link field of the second last element to null
                printf("\nThe deleted element is:%d\t",ptr->num);
                free(ptr);
        }
}
void delete_pos() //deleting a node from a specified position
{
        int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nThe List is Empty:\n");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the node to be deleted:\t");
                scanf("%d",&pos);
                if(pos==0) //if the position is entered as beginning
                {
                        ptr=start;
                        start=start->link ;
                        printf("\nThe deleted element is:%d\t",ptr->num  );
                        free(ptr);
                }
                else
                {
                        ptr=start;
                        for(i=0;i<pos;i++)
                        {
                                temp=ptr;
                                ptr=ptr->link ;
                                if(ptr==NULL)
                                {
                                        printf("\nPosition not Found:\n");
                                        return;
                                }
                        }
                        temp->link =ptr->link; //deleting the node
                        printf("\nThe deleted element is:%d\t",ptr->num );
                        free(ptr); // FInal deallocation
                }
        }
}
