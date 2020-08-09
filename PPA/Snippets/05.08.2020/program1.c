#include<stdio.h>
void main(){
	int x=1;
	while(x>=0){
		printf("%d",x);
	}
}

/*
Output:
	Infinite loop
--------------------------------------------------------------------------------
Exp:
	Every loop requires a terminaton condition to stop executing int x=1
	is the initialization step  x>=0 is the condition for the loop but 
	there is no termination condition for the loop to unserstand where
	or when to stop incrementing.
*/
