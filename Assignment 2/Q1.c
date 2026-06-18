#include<stdio.h>
void main () {
	int no1,no2,sum;
	char op;

	printf("Enter No1 = ");
	scanf("%d",&no1);
	printf("Enter No2 = ");
	scanf("%d",&no2);
	printf("Enter an Operator (+ , - , * , / , %%) = ");
	scanf(" %c",&op);

	if(op == '+') {
		sum = no1 + no2;
		printf("Addition = %d",sum);
	}
	else if(op == '-') {
		sum = no1 - no2;
		printf("Subtraction = %d",sum);
	}
	else if(op == '*') {
		sum = no1 * no2;
		printf("Multiplication = %d",sum);
	}
    else if(op == '/') {
		sum = no1 / no2;
		printf("Division = %d",sum);
	}
	else if(op == '%') {
		sum = no1 % no2;
		printf("Modul = %d",sum);
	}

}