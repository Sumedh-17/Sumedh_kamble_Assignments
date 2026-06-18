#include<stdio.h>
void main () {
	float price;
	char std;

	printf("Enter Price = ");
	scanf("%f",&price);
	printf("Are you a Student (yes or no) = ");
	scanf(" %c",&std);

	if ( price >= 500 && std == 'y') {
		
		float dis = price * 0.2;
		float final = price - dis;
		printf("You got 20 %% Discount = %f",final);
		
	} else if(price < 500 && std == 'y') {

		float dis = price * 0.1;
		float final = price - dis ;
		printf("You got 10 %% Discount = %2.f",final);
		
	} else if (price >= 600 && std == 'n') {
		
		float dis = price * 0.15;
		float final = price - dis ;
		printf("You got 15%% Discount = %2.f",final);
		
	} else {
		
		printf("No discount");
	}


}