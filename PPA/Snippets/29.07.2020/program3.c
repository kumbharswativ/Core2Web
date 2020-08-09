#include<stdio.h>
void main(){
	float num1 = 13.5;
	double num2 = 12.4;
	
	printf("number1 = %f\n",num1);
	printf("number2 = %lf",num2);
}

/*
output:
	number1 = 13.500000
	number2 = 12.400000
-----------------------------------------------------------------------
Exp:
	- printf() function is used to write(display/print) the output
	  on the screen.
	  
	In above code:
		num1=13.5 is float type 
		num2=12.4 is double type
		
	printf("number = %f\n",num1); In this %f is the format specifier
	which is used to display the float type data
	
	%f is replaced by value of an float variable(num1) and print the
	output number=13.500000
	
	printf("number = %lf\n",num2); In this %lf is the format specifier
	which is used to display the double type value
	
	%lf is replaced by value of an double variable(num2) and print the output
	number=12.400000
	 
*/
