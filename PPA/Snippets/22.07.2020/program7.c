#include<stdio.h>
void main(){
	switch(*(1+"AB" "CD"+1)){
		case 'A':printf("pulp fiction");
			 break;
		
		case 'B':printf("12 Angry Man");
			 break;
			 
		case 'C':printf("Casabance");
			 break;
			 
		case 'D':printf("Blood Diamond");
	}
}
/*
Output:
	Casabance
----------------------------------------------------------------------
Exp:
	The answer is Casabance because the evaluation of expression is 
	*(1+"AB" "CD" + 1)=1+"AB""CD"="BCD" and then "BCD" + 1 = "CD" and *(CD)
	is first character of char * so C case label is executed.
*/
