#include<stdio.h>
void main(){
	int x=5;
	while(x++ > 0){
		printf("%d ",x);
	}
}

/*
Output:
	Infinite loop
--------------------------------------------------------------
Exp:
	Every loop requires a termination condition to stop 
	executing int x = 5 is the initialization step, 
	x++ > 0 is the condition for the loop but there
	is no termination condition for the loop to 
	understand where or when to stop incrementing.
*/
