#include<stdio.h>
void main(){
	int x=0;
	while(+(+x--)==0){
		printf("%d ",x);
	}
}

/*
Output:
	-1
-------------------------------------------------------------------------
Exp:
	The loop is equivalent to :
	
	while(+(+x)==0){
		x=x-1;
		printf("%d ",x);
	}
	
	The unary operator '+' has the highest priority. The bracket 
	is solved first so +0 remains 0. Now it becomes : (+(0)==0)
	that is (0==0) which returns true so the body of the loop is
	executed inside the while loop the value of x is decremented
	to x=-1 this value of x gets printed as output.
*/
