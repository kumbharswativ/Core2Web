#include<stdio.h>
int main(){
	float a = 5.2;
	switch((int)a){
		case 1:
			printf("one\n");
			break;
		case 5:
			printf("five\n");
			break;
		case 2:
			printf("two\n");
			break;
		default:
			printf("else\n");
			break;
		
}

/*
output:
	question3.c: In function ‘main’:
	question3.c:17:1: error: expected declaration or statement at end of input
   	17 | }
   	   | ^
-------------------------------------------------------------------------------------------
Exp:
	'}' is required at the end of the switch block 	
*/
