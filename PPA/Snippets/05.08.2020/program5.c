#include<stdio.h>
void main(){
	int x = 5, y = 0;
	while (x-- > y++){
		printf("%d ",x);
	}
}

/*
Output:
	4 3 2
------------------------------------------------------------------
Exp:
	First the comparison is done then the decrement of int
	x and increment of int y is done The while loop 
	executes till the condition is True.
	
	Iterations:
	
	1. x=5 y=0 x>y : True x=x-1 y=y-1 x=4 y=1 print:4
	2. x=4 y=1 x>y : True x=x-1 y=y-1 x=3 y=2 print:3
	3. x=3 y=2 x>y : True x=x-1 y=y-1 x=2 y=3 print:2
	4. x=2 y=3 x>y : False break loop
*/
