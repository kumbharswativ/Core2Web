#include<stdio.h>
void main(){
	int a;
	float b;
	printf("Enter integer and then a float: ");
	scanf("%d%f", &a, &b);
	printf("You entered %d and %f",a,b);
}

/*
output:
	Enter integer and then a float: 5 8.2
	You entered 5 and 8.200000
------------------------------------------------------------------------------------------------
Exp:
	- printf() function is used to write(display/print) the output on the screen
	- scanf() function is used to read the input from keyboard(from user)
	
	In above code:
	a is integer type
	b is float type
	
	printf("Enter integer and then a float: ");
	this printf function display the string on screen
	Enter integer and float value.
	
	scanf("%d%f",&a,&b);
	here %d and %f defines the values are integer and float type
	scanf function read the input from keyboard and stored in a and b
	
	printf("You entered %d and %f",a,b);
	In this %d is replaced with value of a and %f is replace with vallue of b
	
	the printf() function write the output on the terminal 
*/
