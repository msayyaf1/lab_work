#include<stdio.h>
#include<malloc.h>
struct node
{
        int coef;
        int exp;
        struct node *link;
}*new,*A=NULL,*B=NULL,*E=NULL,*temp;
void main()
{
        int c;
        int m,n,i,k,d;
        struct node *t1,*t2,*t3;
        printf("enter the nof terms of A \n");
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
                printf("enter the coefficents & exponents \n");
                scanf("%d %d",&c,&d);
                new=(struct node *)malloc(sizeof(struct node));
                new->coef=c;
                new->exp=d;   
                new->link=NULL;
                if(A==NULL)
                {
                        A=new;
                        temp=A;
                }
                else
                {
                        temp->link=new;
                        temp=new; 
                }
        }
        printf("enter the no:- of terms of B \n"); 
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                printf("enter the coefficents & exponents \n");
                scanf("%d %d",&c,&d);
		new=(struct node *)malloc(sizeof(struct node));
                new->coef=c;
                new->exp=d;
                new->link=NULL;
                if(B==NULL)
                {
                        B=new;
                        temp=B;
                }
                else
                {
                        temp->link=new;
                        temp=new;
                }
        }
        t1=A;

      t2=B;


        while(t1!=NULL&&t2!=NULL)
        {

                if(t1->exp==t2->exp)
                {
                        k=t1->coef+t2->coef;
                        new=(struct node *)malloc(sizeof(struct node));
                        new->coef=k;
                        new->exp=t1->exp;;
                        new->link=NULL;
                        t1=t1->link;
                        t2=t2->link;
                }
                else if(t1->exp>t2->exp)
                {
                        new=(struct node *)malloc(sizeof(struct node));
                        new->coef=t1->coef;
                        new->exp=t1->exp;
                        t1=t1->link;
                }
                else
                {
                        new=(struct node *)malloc(sizeof(struct node));
                        new->coef=t2->coef;
			         t2=t2->link;
                }
                if(E==NULL)
                {
                        E=new;
                        temp=E;
                }
                else
                {
                        temp->link=new;
                        temp=new;
                }
        }
        while(t1!=NULL)
        {
                t3->link=t1;
        }
        while(t2!=NULL)
        {
                t3->link=t2;
        }
        printf("Polynomial A \n");
        temp=A;
        while(temp!=NULL)
        {
                printf("%d(x^%d)+",temp->coef,temp->exp);
                temp = temp->link;
        }
        printf("0");
        printf("\n");
        printf("Polynomial B \n");
        temp=B;
        while(temp!=NULL)
        {
                printf("%d(x^%d)+",temp->coef,temp->exp);
                temp = temp->link;
        }
        printf("0");
        printf("\n");
        printf("Polynomial E \n");
	temp=E;
        while(temp!=NULL)
        {
                printf("%d(x^%d)+",temp->coef,temp->exp);
                temp = temp->link;
        }
        printf("0");
        printf("\n");
}
