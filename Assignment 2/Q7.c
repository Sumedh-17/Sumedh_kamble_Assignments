#include<stdio.h>
void main()
{
	int age;
	printf("Enter Your Age = ");
	scanf("%d",&age);
	
	if (age < 13)
	printf("Child");
	else if( age < 20)
	printf("Teenager");
	else if (age < 60)
	printf("Adult");
	else if (age < 100)
	printf("Senior");
	else 
	printf("invalid");
}