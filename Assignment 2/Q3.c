#include<stdio.h>
void main ()
{
	int a,b,c;
	printf("Enter No 1 = ");
	scanf("%d",&a);
	printf("Enter No 2 = ");
	scanf("%d",&b);
	printf("Enter No 3 = ");
	scanf("%d",&c);
	
	if (a > b && a > c)
	printf("%d is the Greatest",a);
	else if (b > a && b > c)
	printf("%d is the Greatest",b);
	else if (c > b && c > a)
	printf("%d is the Greatest",c);
}