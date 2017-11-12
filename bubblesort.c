#include<stdio.h>
void main(){
int a[100],n,i,temp,j,end;
printf("ENter the number of elements");
scanf("%d",&n);
printf("Enter the numbers");
for(i=0;i<n;i++){
 scanf("%d",&a[i]); }
for(end=n;end>0;end--){
for(i=0;i<end;i++){
    if (a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
                    }}}
printf("The sorted elements are\n");
for(i=0;i<n;i++){
   printf("%d",a[i]);}
}
       
