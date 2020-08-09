#include<stdio.h>
void main(){
	int number1, number2;

	printf("Enter two integers: ");
	scanf("%d %d", &number1, &number2);

	if (number1 >= number2) {
		if (number1 == number2) {
			printf(" %d = %d",number1,number2);
		}
		else {
			printf(" %d > %d", number1, number2);
			}
	}
		else {
			printf(" %d < %d",number1, number2);
		}
	}
	
/*
------------------------------------------------------------------
output :
	Enter two integers: 12 6
 	12 > 6
------------------------------------------------------------------
Explanation:
	number1=12
	number2=6
	
	(number1>=number2)
	12>=6
	so it enters into the outer if block
	
	(number1==number2)
	12==6		.................condition false
	
	hence it executes the inner else block
--------------------------------------------------------------------
*/
