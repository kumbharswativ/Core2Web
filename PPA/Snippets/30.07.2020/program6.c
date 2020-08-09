#include<stdio.h>
void main(){
	int val=0;
	for(;;;){
		printf("core2web\n");
	}
}

/*
output:
	nothing will be printed
------------------------------------------------------------------------------------------------------
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
	
	if we give semicolons
	1. less than 2
	2. greater than 2
	
	then compiler gives compiler time error
	
	our code consist of 3 semicolons ie(;;;) which is greater than 2 because of this 
	it gives compile time error
*/
