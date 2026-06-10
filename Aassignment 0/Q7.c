#include<stdio.h>
void main ()
{
	int min = 170;
	int hours,rem;
	hours = min / 60;
	rem = min % 60;
	
	printf("Hours = %d \n",hours);
	printf("Remaining minutes = %d",rem);
	
	
}