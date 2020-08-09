#include<stdio.h>
void main() {
	int a=5, b=3;
	switch(a) {
		case 1:
			printf("One\n");
		case 5:
			printf("Two.\n");
		case b:
			printf("Three.\n");
		case 'a':
			printf("Four.\n");
		default:
			printf("Default.\n");
	}
}

/*
output:
	question6.c: In function ‘main’:
	question6.c:9:3: error: case label does not reduce to an integer constant
	    9 |   case b:
	      |   ^~~~
---------------------------------------------------------------------------------------
Exp:
	case b: shuld be represent as case'b'
---------------------------------------------------------------------------------------
corrected code:
	
	#include<stdio.h>
void main() {
	int a=5, b=3;
	switch(a) {
		case 1:
			printf("One\n");
		case 5:
			printf("Two.\n");
		case 'b':
			printf("Three.\n");
		case 'a':
			printf("Four.\n");
		default:
			printf("Default.\n");
	}
}
----------------------------------------------------------------------------------------------	
	
*/
