#include<stdio.h>
void main(){
	int const X=0;
	switch(5/4/3){
		case X: printf("Clinton");
			break;
		
		case X+1:printf("Gandhi");
			 break;
			 
		case X+2:printf("Gates");
			 break;
		
		default:printf("Brown");
	}
} 

/*
Output:
	compilation error
----------------------------------------------------------------------
Exp:
	The answer is compilation error because only integers can be
	in case label not other datatypes or any variable name. And 
	as char is stored internally as ascii so its by default int. 
*/
