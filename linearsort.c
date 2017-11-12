#include<stdio.h>
main(){
int a[30],n,i,temp,j;
printf("ENter the number of elements");
scanf("%d",&n);
printf("ENter the numbers");
for(i=0;i<n;i++){
 scanf("%d",&a[i]); }
for(i=0;i<n;i++){
for(j=i+1;j<n;j++)
 if(a[i]>a[j]){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}}
for(i=0;i<n;i++){ 
printf("%d ",a[i]);
}}


