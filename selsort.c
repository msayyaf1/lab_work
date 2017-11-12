#include<stdio.h>
main()
{
 int a[10],n,i,j,temp,min;
 printf("enter the limit");
 scanf("%d",&n);
 printf("enter the elements ");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  for(i=0;i<=n-1;i++)
 { min=i;
  for(j=i+1;j<=n-1;j++)
  { if(a[j]<a[min])
    { min=j;
    } 
  }
  if(min!=i)
  {
   temp=a[min];
   a[min]=a[i];
   a[i]=temp;
  }
 }
 printf(" the sorted array is ");
  for(i=0;i<n;i++)
  { printf("%d ",a[i]);
  }
}
