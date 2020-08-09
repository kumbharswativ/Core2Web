#include<stdio.h>
#define Core2web 1

void main(){
	switch(printf("Core2web")){
		case 1:
			printf(" PPA ");
			break;
			
		case 2:
			printf(" JAVA ");
			break;
		
		default:
			printf("python");
			break;
	}
}

/*
Output:
	Core2webpython
-----------------------------------------------------------
Exp:
	for switch statement it requires a constant value here printf
	is written inside switch because return type of printf is
	integer, it returns the count of character written in print()
	
	so first core2web will get printed then printf will return the
	value 8 because ccore2web is a string of 8 character
	
	then compiler will look for case 8 but it is not given in the 
	code so default will get executed
	
	hence ans is python
*/
