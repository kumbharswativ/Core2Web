#include<stdio.h>
void main(){
	int x=0;
	while(++x--==0){
		printf("%d ",x);
	}
}


/*
Output:
	compile time error
---------------------------------------------------------------------
Exp:
	The operaton is performed as :
	(++(x--))==0. Here it can be  simplified as (++(x-1)). 
	The increment operation only takes a variable for 
	performing an operation but here we are providing 
	it with an expression.
	Thats why it gives an error 
*/
