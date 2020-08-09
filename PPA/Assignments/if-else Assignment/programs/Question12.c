#include<stdio.h>
void main(){
	int num=120;

	if(num%2 ==0){
		printf("%d is divisible by 2",num);
		
		if(num%3 == 0){
			printf("%d is divisible by 3",num);
			
			if(num%5==0){
				printf("%d is divisible by 5",num);
				
				}else {
			printf("%d is not divisible by 5",num);
			}
		}else{
		
		printf("%d is not divisible by 3",num);
		}
	 }
	else{
		printf("%d is not divisible by 2",num);
	}
}
/*
-----------------------------------------------------------------------------------
output:
	120 is divisible by 2120 is divisible by 3120 is divisible by 5
------------------------------------------------------------------------------------
Explanation:

	num%2==0
	120%2==0
	0==0		................condition is true
	it enters into the outer if block
	prints -> 120 is divisible by 2
	
	num%3==0
	120%3==0
	0==0		.................condition is true
	it enters into the inner if block
	prints -> 120 is divisible by 3
	
	num%5==0
	120%5==0
	0==0		...............condition is true
	it enters into the if block
	prints-> 120 is divisible by 5
----------------------------------------------------------------------------------------		
*/
