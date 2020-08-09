#include<stdio.h>
int main(){
	int x = 10, y = 20;
	if(!(!x) && x)
		printf("x = %d\n",x);
	else
		printf("y = %d\n", y);
	return 0;
}
/*
Output:
	x=10
-----------------------------------------------
Exp:
	if(!(!x) && x)
	//if(!((!x) && x))
	//(!(false && true))       non zero number is true
	//(!false)
	
	so condition becomes true
	
*/
