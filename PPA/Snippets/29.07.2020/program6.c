#include<stdio.h>
void main(){
	char tempstr[]="THE WATER HAS NO COLOR";
	printf("\n The value returned by printf() for tempstr is : %d",printf("%s",tempstr));
}

/*
Output: 
	THE WATER HAS NO COLOR
 	The value returned by printf() for tempstr is : 22
----------------------------------------------------------------------------------------------------------
Exp:
	- printf() function is used to write(display/print) the output on the screen
	
	In above code:
		tempstr[] is a character array. character array is used to store the string
		
	printf("\nThe value returned by printf() for tempstr is : %d",printf("%s",tempstr));
	
	here nested printf() function is used.
	
	The printf function has return type int
	
	printf() function return total no of characters printed on the screen
	
	In this insider printf() function will execute first and print tempstr value
	
		E.g THE WATER HAS NO COLOR
		
	Outsider printf() function print the length of string (number of character printed on the
	screen by insider printf())
	
	printf("\n The value returned by printf() for tempstr is : %d",printf("%s",tempstr))	//THE WATER HAS NO COLOR
	
	printf("\n The value returned bt printf() for tempstr is : %d",lenght(const char* format))	//length(str)=22
	
	output:
		The value returned by printf() for tempstr is 22
*/
