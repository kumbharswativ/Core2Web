#include<stdio.h>
void main(){
	int i=0;
	for(i=0;i<5;i++){
		if(i<4){
			printf("pun intended!");
		}
		break;
	}
}

/*
output:
	pun intended!
------------------------------------------------------------------
Exp:
	in first iteration i value is zero then it check the condition
	in condition i is less than five so it go into the body and 
	see the if condition in if condition i is less than 4 so 
	it executes the printf and go outside if and execute break
	statement. due to break statement for loop terminate and 
	stop to iterate that's why we get output as pun intended!
*/
