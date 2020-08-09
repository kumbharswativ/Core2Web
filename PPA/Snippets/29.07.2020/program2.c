#include<stdio.h>
void main()
{
	int digitTen = 10;
	printf("what is digit ten %d",digitTen);
}

/*
output:
	what is digit ten 10
--------------------------------------------------------------------------
Exp:
	-> printf() function is used to write (display/print) the 
	   output on the screen.
	   
       -> Prototype : extern int printf(const char* __restrict __format, ...);
       
       -> the printf function has return type int
       
       -> printf() function return total no of characters printed on the screen
       
       -> printf() function has two parameters
       	1. const char* __restrict__format:
       		it contains string
       		
       		- const char* contains two different types
       		a. ordinary character which is display on the screen
       			e.g. printf("Hello");
       			
       		b. format specifiers or conversion specifications which convert
       		   the given data in specified data type and print the corresponding
       		   argument
       		       e.g. printf("%d",varName);
       	
       	
       	2. ellipsis(...) :
       		it contains that the function can have 'N' number of arguments.
       		
       
       In above code:
       	
       	digitTen = 10 is integer type variable 
       	
       	printf("what is digit ten %d", digitTen); in this %d is a format 
       	specifier which is used to display the integer type data.
       	
       	%d is repalced by value of an integer variable(digitTen)
       	
       	the printf() function display the output on the screen is  what is digit ten 10
*/






