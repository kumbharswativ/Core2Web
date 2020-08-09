#include<stdio.h>
void main(){

	int number=10;
	
	if(number!=0 && number>0){
		printf("%d is a positive no",number);
		number=-5;
	}
	if(number<0 ){
		printf("%d is a negtive no",number);
		number=0;
	}
	if(number==0){
		printf("number is zero");
		number=15;
	}
	if(number%4==0);{
		printf("%d is divisible by 4",number);
	}
}

/*
------------------------------------------------------------------------------------------
output:
	10 is a positive no-5 is a negtive nonumber is zero15 is divisible by 4
-------------------------------------------------------------------------------------------
Explanation :
	number=10
	(number!=0 && number>0)
	10 !=0 && 10>0
	true && true
	true
	Hence it prints 10 is a positive no.
	number=-5			...............current value of number
	
	number<0
	-5<0
	it will execute -5 is a negative no
	number=0			.....................current value of number
	
	number==0
	0==0
	it will print number is zero
	number=15			.................current value of number
	
	if(number%4==0)	........................null satement

	hence it will print 15 is divisible by 4
	 
--------------------------------------------------------------------------------------------	 
*/
