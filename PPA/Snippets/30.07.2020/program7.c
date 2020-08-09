#include<stdio.h>
void main(){
	int val=0;
	for(;;){
		printf("core2web\n");
	}
}

/*
output:
	core2web will print infinite times
---------------------------------------------------------------------------
Exp:
	syntax:
		for(initialization;condition;incre/decre)
		
	as we know for loop consist of
	1. initialization
	2. condition
	3. incre/decre
	
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
