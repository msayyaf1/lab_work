#include<stdio.h>
void main(){
int key,a[100],mid,n,i,j,temp,p,q,flag=0;
printf("Enter the number of element");
scanf("%d",&n);
printf("ENter the  elements");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
printf("ENter the element to be searched:");
scanf("%d",&key);
for(i=0;i<n;i++){
 for(j=i+1;j<n;j++){
     if(a[i]>a[j]){
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
                  }
                   }}
p=0;q=n-1;
while (p<=q){
    mid=(p+q)/2;
    if (a[mid]==key){
          flag++;
          break;}
    else if (a[mid]<key)
          p=mid+1;
    else
          q=mid-1;
}
if(flag!=0)
   printf("The element is found\n");
else
   printf("THe element is not present\n");
}

