#include<stdio.h>
void main(){

	int x = 0,y =  6,ans = 0;

	ans = x++ || y++;
	//ans = temp + y++        In logical OR if the 1st value is true then it ignores 2nd value & evaluate 
	//                        result as true whereas if 1st value is false then it checks 2nd value 
	//ans = 0 || 6            and evaluate result as false/true.
	//ans = 1                 (as x is false and y is true  so ans is true) 
	
	printf("%d %d %d\n",x,y,ans); // 1 7 1
}
