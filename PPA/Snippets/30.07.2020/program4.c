#include<stdio.h>
void main(){
	int val=0;
	for(val<3;val++;){
		printf("core2web\n");
	}
}
/*
output:
	nothing will be printed
---------------------------------------------------------------
Exp:
	case 1:
		for loop requires(initialization; condition; increment/decrement)
		
		In above code, we are using condition in initialization position, but
		for loop require variable or empty because of incorrect sequence in for loop
		it will not enter in for loop and nothing will be print, as below for loop 
		there is not any code,or printing statement etc.
		
	case 2:
		but, if our for loop have sequence like below
		for(val++;val<3)
		
		Then program executes and move in infinite loop why above sequence
		runs for loop because in initialization part for loop got variable
		and for loop consider (val++) as initialization part. 
*/
