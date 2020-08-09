#include<stdio.h>
void main(){
	char str[] = "LEARNING AND ENJOYING";
	printf("while printing ");
	printf(" , the value returned by printf() is :- %d",printf("%s",str));
}

/*
output:
	while printing LEARNING AND ENJOYING , the value returned by printf() is :- 21
------------------------------------------------------------------------------------------------
Exp:
	- printf() function is used to write (display/print) the output on the screen
	
	- str[] is a character array.
	
	- character array is used to store the string
	
	- the printf function has return type int
	
	- printf() function return total no of characters printed on screen
	
	In above code:
	
	In this nested printf() is use.
	In that insider printf() function will execute first and print str value
	outsider printf() function print the length of string(number of character printed
	on the screen by insider printf())
	
	printf(", the value returned by printf() is :-%d",printf("%s",str));
	printf(", the value returned by printf() is :-%d",length(const char*));  //LEARNING AND ENJOYING
*/
