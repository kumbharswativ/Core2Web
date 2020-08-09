
#include<stdio.h>
void main(){
	char val=1;
	
	if(val--==0)
		printf("TRUE");
	else
		printf("FALSE");
}

/*
Output:
	FALSE
------------------------------------------------------------------
Exp:
	in the above code we have performed the post decrement operation on the
	variable val which is initialize to 1
	
	and hence internally a function which performs the post decrement
	
	e.g int post(val){
		//post(1)
		int temp;
		temp=val;    .....temp=1;
		val=val-1;   ......val=0;
		return temp; .......return 1;
	}
	
	and from above snippet the value gets returned as 1 and so the
	conditions for if blocks gets false and so else blocks 
	gets executed and hence the current answer is FALSE 
*/
