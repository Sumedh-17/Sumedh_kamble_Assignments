#include<stdio.h>
void main ()
{
	int a = 1221,rev = 0,rem,temp;
	temp = a;
	while( a != 0)
	{
		rem = a % 10;
		rev = rev * 10 + rem;
		a = a / 10;
		
	}
	if (temp==rev)
	
		printf("Number is pallindrome");
     else
		printf("Number is not Pallindrome");
	
}