#include<stdio.h>
main(){
int a[30],n,i,temp,j,key;
printf("ENter the number of elements");
scanf("%d",&n);
printf("ENter the numbers");
for(i=0;i<n;i++){
 scanf("%d",&a[i]); }
for(i=0;i<n;i++)
     {
      key=a[i];
      j=i;
      while(j>=1&&a[j-1]>key){
              a[j]=a[j-1];
               j--;
                      }
      a[j]=key;
             }
for(i=0;i<n;i++){
          printf("%d ",a[i]);
}}
