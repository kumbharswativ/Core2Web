#include<stdio.h>
void main(){
	int Integer;
	printf("Enter an integer to show: ");
	scanf("%d",&Integer);
	printf("Number is %d",Integer);
}

/*
Output:
	Enter an integer to show: 9
	Number is 9
-------------------------------------------------------------------------------------------
Exp:
	- printf() function is used to write(display/print) the output on the 
	  screen
	  
	- scanf() function is used to read the input from keyboard(from user)
	
	prototype : extern int scanf(const char* __restrict__format,...);
	
	scanf() function also has two parameters :
		1. const char* __restrict__format
			The first parameter contains format specifier.
			
		2. ellipsis(...)
			It contains the address of 'N' number of variables and store
			the data from keyboard on that address
			
	In above code :
		Integer is int type variable.
		printf("Enter an integer to show :")is ordinary type string it print the string :
			Enter an integer to show:
			
		scanf("%d",&Integer); In this "%d" specify the integer data type and '&' is used
		to give the address of variable to store the data
		
		scanf() function accept the input from keyboard and stored at that address.
		
		If user enter 9 number then this value store as Integer=9;
		
		printf("Number is %d",Integer) In this %d is a format specifier which is used to 
		display the integer type data
		
		%d is replaced by value of an integer variable so the printf() function display
		the output on the screen is Number is 9
		
*/






