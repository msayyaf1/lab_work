#include<stdio.h>
main(){
int a[30],n,i,count,num;
printf("ENter the number of elements");
scanf("%d",&n);
printf("Enter the numbers");
for(i=0;i<n;i++){
 scanf("%d",&a[i]); }
printf("ENter the number to be checked");
scanf("%d",&num);
for(i=0;i<n;i++){
 if(a[i]==num)
   count++;
   }

printf("The number of occurences is %d ",count);

}

