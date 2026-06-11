#include<stdio.h>
void main () {
	int salary = 4000,ts,da,ta,hra;
	if (salary<=500) {
		da = salary * 0.10;
		ta = salary * 0.20;
		hra = salary * 0.25;

	} else {
		da = salary * 0.15;
		ta = salary * 0.25;
		hra = salary * 0.30;
	}
	ts = salary + da + ta + hra;
	printf("Total Salary = %d",ts);
}