#include<stdio.h>
int main(){
	int i,k;
	for(i=0,k=0;(i<5 && k<3);i++,k++){
		;
	}
	printf("%d\n",i);
	return 0;
}

/*
output:
	3
--------------------------------------------------------------------
Exp:
	In for loop you can see at initialization part there is two 
	initializaton and at increment/decrement part there is two
	post increment but it works and initialize both at time.
	
	in first iteraton i and k becomes 0 then  it check condition
	which is (i<5 && k<3) true so it execute null statement then go 
	to increment part and increment i and k then i and k becomes 1
	it iterate still k becomes 3 because && operator required both the 
	operand true after execution i becomes 3 and print it
	
	
*/
