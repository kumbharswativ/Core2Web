#include<stdio.h>
void m.ain(){
	int x=5;
	while(x-- >0){
		printf("%d ",x);
	}
}

/*
Output:
	4 3 2 1 0
-------------------------------------------------------------
Exp:
	The loop is equivalent to:
	while(x>0){
		x=x-1;
		printf("%d\n",x);
	}	
	so the value of x is first decremented then it is printed
*/
