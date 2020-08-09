#include<stdio.h>
int main(){
	int pn=100;
	if(pn>20)
		if(pn<20)
			printf("Heyyyyyy");
	else
		printf("Hiiiiiiiiii");
	return 0;
}error: ‘else’ without a previous ‘if’


/*
Output:
	Hiiiiiiiii
---------------------------------------------------
Exp:
	if(pn>20)   .......	//100>20 =>
	condition is true
		if(pn<20)    ............//100>20  =>
	condition is false so else will get executed
	else
		printf("Hiiiiiii")
 		
	
*/
