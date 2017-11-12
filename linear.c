#include<stdio.h>
main(){
int num,a[15],n,i,pass=0;
printf("Enter the number of elemtns");
scanf("%d",&num);
printf("Enter the numbers");
for(i=0;i<num;i++){
 scanf("%d",&a[i]);}
printf("Enter the number to be searched");
scanf("%d",&n);
for(i=0;i<=num;i++){
 if(a[i]==n)
    pass++;
}
if(pass!=0)
   printf("The number is present");
else
   printf("Not present");

}
