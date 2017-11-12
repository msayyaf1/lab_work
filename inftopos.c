//PROGRAM TO CONVERT INFIX TO POSTFIX EXPRESSION
#include<stdio.h>

char stack[20],top=-1;

char priority(char op,char choice)
{
        if(choice=='i')
        {
                switch(op)
                {
                case '+':
                case '-':
                        return(1);
                        break;
                case '*':
                case '/':
                        return(3);
                        break;
                case '^':
                        return(6);
                        break;
                case '(':
                        return(9);
                        break;
                case ')':
                        return(0);
                        break;
                }
        }
        else
        {
                switch(op)
                {
                case '+':
                case '-':
                        return(2);
                        break;
                case '*':
                case '/':
                        return(4);
                        break;
                case '^':
                        return(5);
                        break;
                case '(':
                        return(0);
                        break;
                }
        }
}

void push(char n)
{
        if(top>=20)
                printf("STACK IS FULL!");
        else
                {
                top++;
                stack[top]=n;
                }
}

char pop()
{
        if(top<0)
                printf("STACK IS EMPTY !");
        else
                {
                return(stack[top]);
                top--;
                }
}

void main()
{
char exp[20];
int i,isp,icp,j;
printf("enter the expression :");
gets(exp);
for(i=0;exp[i]!='\0';i++);
exp[i]=')';
exp[i+1]='\0';
stack[0]='(';
for(i=0;exp[i]!='\0';i++)
	{
	
	if(exp[i]==')')
		{
		for(j=top;stack[j]!='(';j--)
			{
			pop();
			}
		pop();
		}
	else if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^')
		{	
		isp=priority(stack[j],'s');
		switch(stack[j])
			{
			case '+':
				icp=priority('+','i');
				break;
			case '-':
				icp=priority('-','i');
				break;
			case '*':
				icp=priority('*','i');
				break;
			case '/':
				icp=priority('/','i');
				break;
			case '^':
				icp=priority('^','i');
				break;
			}
		if(icp<=isp)
			{
			pop();
			top--;
			}
		else
			{
			push(exp[i]);
			}
		}

	else if(exp[i]=='(')
		{
		push(exp[i]);
		}
	else
		{
		printf("%c",exp[i]);
		}
	}
}
