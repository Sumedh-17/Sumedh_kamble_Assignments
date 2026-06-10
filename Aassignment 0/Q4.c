#include<stdio.h>
 void main()
{
	int no1 = 20;
	int no2 = 30;
	int temp;
	
	temp = no1;
	no1 = no2;
	no2 = temp;
	
	printf("no1 = %d \n no2 = %d",no1,no2);
	
	
}