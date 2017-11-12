#include <stdio.h>
int min(int array[],int n, int i)

{     int small,pos;
      small=array[i];
      pos=i;
      for(i=i+1;i<n;i++){
            if(array[i]<small){
                  small=array[i];
                  pos=i;
                  }
            }
      return pos;        //small is the smallest number in the array
                       //pos is the position of the smallest element
}
void main(){
 int n,array[100],i,j,pos,temp;
 printf("Enter the number of elements in the array");
 scanf("%d",&n);
 printf("Enter the elements of the array");
 for(i=0;i<n;i++)
    scanf("%d",&array[i]);
 for(i=0;i<n-1;i++)
  { 
   pos=min(array,n,i);
   if(pos!=i){
         temp=array[i];
         array[i]=array[pos];
         array[pos]=temp;
             }
  }
for(i=0;i<n;i++)
      printf("%d ",array[i]);  
   }	        
