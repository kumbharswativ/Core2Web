#include<stdio.h>
void main(){
	int x = 0;
	while(+(+x--)!=0){
		printf("%d ",x);		
	} 
}

/*
Output:
	Nothing will be printed
--------------------------------------------------------------------------------------
Exp:
	The loop is equivalent to :
	
	while(+(+x)!=0){
		x=x-1;
		printf("%d",x);
	}
	
	The unary operator '+' has the highest priority.
	the bracket is solved first so +0 remains 0.
	Now it becomes (+(0)!=0) that is (0!=0) which returns
	false. Hence the while loop will not be executed
*/
