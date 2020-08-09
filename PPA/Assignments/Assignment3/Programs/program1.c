#include<stdio.h>
void main(){
	int a=1,b=0;
	
	if(a++ || ++b){
		printf("Hello\n");	//Hello
	}
	
	/*
		a++ || ++b
		1 || ++b		(if 1st operand is true, second operand will not be evaluated for logical OR)
		1(true)	
	*/
	
	
	if(--b && a--){
		printf("Hi!!!\n");		//Hi!!!
	}
	
	/*
		--b && a--
		(0-1) && (2-1)
		-1 && 1
		1(true)
		
	*/
}
