#include<stdio.h>
void main(){
	int x=5,y=0;
	while(--x > ++y){
		printf("%d ",x);
	}
}

/*
Output:
	4 3
-----------------------------------------------------------------------------
Exp:
	The increment and decrement operators will have higher priority 
	and will be performed first and then the comparison operations
	will be performed. The while loop will execute the print statement
	till the condition becomes false
	
	The loop will be equivalent to:
	while(((x-1) > (y+1)){
		printf("%d ",x);
	}
	
	Iterations:
		
		1. x=5 y=0 x=x-1 : True print:4
		2. x=4 y=1 x=x-1 y=y+1 x=3 y=2 x>y : True print 3
		3. x=3 y=2 x=x-1 y=y+1 x=2 y=3 x>y : False break loop
*/
