#include<stdio.h>
void main(){
	char ch='e';
	
	switch(ch){
	
	case'A':
		printf("A-case\n");
		break;
		
	case'B':
		printf("B-case\n");
		break;
		
	case'C':
		printf("C-case\n");
		break;
		
	default:	//default is used when there is no matching case exist
		printf("Default case\n");
		break;
	}
}
/*
output:
	Default case
*/
