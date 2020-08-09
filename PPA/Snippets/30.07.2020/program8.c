#include<stdio.h>
void main(){
	int val=0;
	for(val;;){
		printf("core2web\n");
	}
}

/*
output:
	core2web will print in infinite time
-----------------------------------------------------------------------------------------------------
Exp:
	in for loop if you not given initialization condition incre/decre, then also program
	runs perfectly.
	
	but for loops saya in my syntax i need only two semicolons ie for(;;) so that i'll
	identify part of initialization,condition, incre/decre
	
	1. initialization=start condition
	2. condition=end condition
	
	as initialization and condition is empty for loop does not understand from 
	where to start and when to end that why for loop will goes into 
	infinite loop
*/
