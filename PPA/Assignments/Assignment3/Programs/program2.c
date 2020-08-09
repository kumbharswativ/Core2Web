#include<stdio.h>
void main(){
	int a=10,b=20;
	
	if((a++ < 10) && (++a && ++b)){
		printf("Hello\n");		//out of if block
	}
	
	/*
		a++ < 10
		10< 10    ....false
		
		(if the 1st condition is falsr in Logical AND it will noot check for the rest of the condition)
	*/
	
	
	if((b++ <= 20) || (++a <= b++)){
		printf("Hi\n");		//Hi
	}
	
	/*
		b++ <= 20
		20 <=20 	.....true
		(1st condition is true so the ans will be true as it is logical OR)
		
	*/
}
