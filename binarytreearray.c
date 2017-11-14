#include<stdio.h>

int arr[100],count;

void inorder(int pos)
{
    int i,j;
    i = 2*pos + 1;
    if(arr[i] != 0)
        inorder(i);
    printf("	 %d",arr[pos]);
    j = 2*pos +2;
    if(arr[j] != 0)
        inorder(j);

}

void main()
{
int i,num,choice;
count = 0;
for(i=0;i<100;i++)
    arr[i] = 0;

do
{
    printf("enter your choice\n 1.Insert into tree\n 2.delete from tree\n 3. search for an element in tree\n 4. inorder traversal\n");
    printf("5. exit");
    scanf("%d",&choice);

    switch(choice)
    {

        case 1:
            printf("enter element");
            scanf("%d",&num);
            arr[count] = num;
            count++;
            break;

        case 2:
            printf("enter the element to be deleted");
            scanf("%d",&num);
            for(i=0;i<count;i++)
            {
                if(arr[i]==num) 
                  {
                    count--;
                    arr[i] = arr[count];
                    arr[count] = 0;
                    break;
                }
            }
            if(i==count)
            printf("element not found");
            break;

            case 3:
                 printf("enter the element to be searched");
                scanf("%d",&num);
                for(i=0;i<count;i++)
                {
                    if(arr[i]==num)   
                    {
                        printf("element found");
                        break;
                    } 
                }
                if(i==count)
                printf("element not found");

                break;

            case 4:
                inorder(0);
                break;
    }
}while(choice != 5);
}

