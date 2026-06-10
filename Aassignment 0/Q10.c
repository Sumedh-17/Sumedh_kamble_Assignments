#include<stdio.h>
void main ()
{
	int maths = 89, science = 78, history = 79, hindi = 90, marathi = 95, tm;
    float percentage;
	tm = maths + science + history + hindi + marathi;
	percentage = (tm * 100)/500;
	printf("Total marks = %d\n",tm);
	printf("Percentage = %.2f",percentage);
}