#include<stdio.h>
void main(){
		printf("Hello someone");
	}

/*
Output:
	Hello someone
------------------------------------------------------------------------------------
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
       		       
       
       in above code:
       	printf("Hello someone"); is a ordinary character, it print Output : Hello someone 
*/
