#include<stdio.h>
void main(){
	char tempchr;
	printf("Enter a character: ");
	scanf("%c",&tempchr);
	printf("You entered %c\nASCII value is %d",tempchr,tempchr);
}

/*
Output:
	Enter a character: 2
	You enterd 2
	ASCII value is 50
------------------------------------------------------------------------------------------------------------
Exp:
	- printf() function is used to write(display/print) the output on the screen
	
	- scanf() function is used to read the input from keyboard(from user)
	
	In above code:
		tempchr is character type.
		
	printf("Enter a character:"); It is ordinary type string. It print the string on terminal
	Enter a character :
	
	scanf("%c",&tempchr); here the %c is formate specifier  used for char
	
	scanf function read the character from keyboard and stored in the variable tempchr
		e.g user enter 2
			tempchr=2y
			
	printf("You enterd %c\nASCII value is %d", tempchr,tempchr);
	In this %c is replace with character value and %d is replace with the ascii value of tempchr
	
	output:
		Enter a character:2
		you entered 2
		ASCII value is 50
		
	here we enter 2 as a character and ascii value of 2 is 50
*/






