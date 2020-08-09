#include<stdio.h>
int main(){
	if((-100 && 100) || (20 && -20))
		printf("%s","condition is true.");
	else
		printf("%s","condition is false.");
	return 0;
}

/*
Output:
	condition is true
---------------------------------------------------------------------
Exp:
	Every number other than zero is considered as true
	so all conditions in if statement are true so if
	block is executed.
*/
