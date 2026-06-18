#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter No 1 = ");
	scanf("%d",&a);
	printf("Enter No 2 = ");
	scanf("%d",&b);
	printf("Enter No 3 = ");
	scanf("%d",&c);
	
	if (a == b && b == c)
	printf("Equilateral Triangle");
	else if (a == b || b == c || a == c)
	printf("Isosceles Triangle");
	else 
	printf("Scalene Triangle");
}