#include<stdio.h>
void main(){
	int x=5 , y=0;
	while(x-- > ++y){
		printf("%d ",x);
	}
}


/*
Output:
	4 3
--------------------------------------------------------------------------
Exp:
	The loop works as follows :
	
	while(x>(y+1)){
		x=x-1;
		printf("%d ",x);
	}
	
	Iterations:
	
	1. x=5 y=0 y=y+1 : y=1 x>y True x=x-1 x=4 print:4
	2. x=4 y=1 y=y+1 : y=2 x>y True x=x-1 x=3 print:3
	3. x=3 y=2 y=y+1 : y=3 x>y False break loop
*/
