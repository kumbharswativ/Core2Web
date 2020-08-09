#include<stdio.h>
#define TRUE 1
int main(){
	if(TRUE)
		printf("1");
		printf("2");
	else
		printf("3");
		printf("4");
	return 0;
}
/*
Output:
	error: ‘else’ without a previous ‘if’
-----------------------------------------------------------------------------
Exp:
	whenever we don't enclose the if block within the curly-braces,
	only one statement after that if statement is considered as a 
	part of if-block,
	
	so printf("1") is part of if block, second printf("2") is considerd as 
	an independent statement
	
	but when compiler read the else statement it will look up for correspond 
	if block to that else but right above if compiler will get an indivisual
	print statement and no correspondence with the if above that print and
	hence it will give error
	
	simply we ain't use any statement between if and else block otherwise 
	compiler gives error.
*/
