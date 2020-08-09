#include<stdio.h>

const int a=1,b=2;
void main(){
		int x=1;
		switch(x){
			case a:
				printf("PPA ");
			case b:
				printf("Java ");
				break;
		}
	
}
/*
Output:
	program1.c: In function ‘main’:
	program1.c:7:4: error: case label does not reduce to an integer constant
	    7 |    case a:
	      |    ^~~~
	program1.c:9:4: error: case label does not reduce to an integer constant
	    9 |    case b:
	      |    ^~~~
	      
---------------------------------------------------------------------------------
Exp:
	This code produces an compile time error because for case label it requires 
	a constant value that can be integer or character,
		and here we are passing a variable as label which is not acceptable
	because value of variable can be changed in program.
		but if we are giving a case label as:
			case 1:
				printf("PPA")
		value 1 is fixed throughout the program we can not change that so it is accepted
		
		so it is giving an compile time error
	
*/
