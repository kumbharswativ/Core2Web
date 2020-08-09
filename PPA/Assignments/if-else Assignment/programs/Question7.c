#include<stdio.h>
void main(){
	int weight=50;
	
	if(weight<50 && weight >30){
		printf("You are under weight");
	}
	
	if(weight>=50 && weight <= 70){
		printf("you are well maintained");
	}
	
	if(weight > 70);{
		printf("you are overweight you have to work hard");
	}
}

/*
----------------------------------------------------------------------------------------------------------------------
output:
	you are well maintainedyou are overweight you have to work hard
-----------------------------------------------------------------------------------------------------------------------
Explanation :
	(weight<50) && (weight>30)
	(50<50) && (50>30)
	false 			.........In Logical AND if one of the condition is false then the output is also false
	
	(weight>=50 && weight <= 70)
	(50>=50) && (50<=70)
	true && true
	true			.........condition is true so it will execute the print statement
	
	if(weight > 70);	.........null statement(compiler simply executes it even if the condition is false)
	
-----------------------------------------------------------------------------------------------------------------------	
*/
