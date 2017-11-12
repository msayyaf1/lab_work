#include<stdio.h>
#include<stdlib.h> 
#define max 20
struct poly
{
	int exp,coef;
};
void main()
{
	struct poly p1[max],p2[max],p3[max];
	int max1,max2,max3;	
	printf("\nEnter first poly : ");
	max1 = read_poly(p1);
	printf("\nEnter second poly : ");
	max2 = read_poly(p2);	
	max3 = add_poly(p1,p2,p3,max1,max2);	
	printf("\nFirst poly is ");
	print_poly(p1,max1);
	printf("\nSecond poly is ");
	print_poly(p2,max2);
	printf("\n The resultant poly after addition is");
	print_poly(p3,max3);
} // main
int read_poly(struct poly p[])
{
	int i,texp;
	i=0;
	printf("\nEnter exp ( use -1 to exit) : ");
	scanf("%d",&texp);
	while ( texp != -1)
	{
		p[i].exp = texp;
		printf("\nEnter coef : ");
		scanf("%d",&p[i].coef);
		i++;
		printf("\nEnter exp ( use -1 to exit) : ");
		scanf("%d",&texp);
	} //whil;e
	return(i);
}// read_poly
int print_poly(struct poly p[], int max1)
{
	int i;
	for(i=0;i < max1;i++)
	printf("%+dX%d ",p[i].coef,p[i].exp);
	return;
} // print_poly
int add_poly( p1,p2,p3,max1,max2)
struct poly p1[],p2[],p3[];
int max1,max2;
{
	int i,j,k;	
	i = j = k = 0;
	while ( i < max1 && j < max2)
	{
		if( p1[i].exp > p2[j].exp)
		{
			p3[k] = p1[i];
			k++;
			i++;
		}
		else
		if( p1[i].exp < p2[j].exp)
		{
			p3[k] = p2[j];
			k++;
			j++;
		}
		else
		{
			p3[k].exp = p1[i].exp;
			p3[k].coef = p1[i].coef + p2[j].coef;
			i++;
			j++;
			k++;
		}
	} //while
	while( i < max1 )
	{
		p3[k] = p1[i];
		k++;
		i++;
	} //while
	while( j < max2 )
	{
		p3[k] = p2[j];
		k++;
		j++;
	} //while
	return(k);
}// add_poly
