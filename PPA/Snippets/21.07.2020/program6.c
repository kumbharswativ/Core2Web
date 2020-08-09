#include<stdio.h>
int main(){
	int a=10;
	if(10L == a)
		printf("10L");
	else if(10 == a)
		printf("10");
	else
		printf("0");
	return 0;
}
/*
Output:
	10L
------------------------------------------------------------
Exp:
	L suffix indicates long int. long requires 8 bytes
	10L will be stored in memory like below,
	0000 0000 0000 0000 0000 0000 0000 1010
	
	10 is of integer type it requires 4 bytes
	10 will be  stored in memory like below
	
	0000 0000 0000 1010
	both 10L and 10 are same and so if condition will 
	return true so answer is 10L
*/
