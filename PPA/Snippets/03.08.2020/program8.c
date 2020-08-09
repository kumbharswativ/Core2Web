#include<stdio.h>
void main(){
	int i=0,j=0;
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(i>1){
				break;
			}
		}
		printf("Damn!\n");
	}
}

/*
output:
	Damn!
	Damn!
	Damn!
	Damn!
	Damn!
------------------------------------------------------------------------------------
Exp:
	in code there is two for loops in first iteration of i it goes to body and
	see another for loop then in inner for loop at first iteration it go to the body
	and see another for loop then in inner for loop at first iteration it go to the
	body and see the if condition which is(i>1) false because i is 0 then go to next
	iteration and again see the if condition which is false if j becomes 4 the inner
	loop stop and it go to the another part of outside for loop body and print the first
	 Damn! then go to the next iteration of outer for loop then i becomes 1 after increment 
	 of i it goes inner for loop and try to execute inner for loop in inner for loop body there 
	 is condition which is (1(i)>1) false 
	 
	 iterate inner for loop untill j becomes 4 after execution of inner for loop 
	 it jump outside the inner loop and print second Damn! and go to the next iteration
	 of i then i becomes 2 and in inner for loop at first iteration condition is 
	 true because i becomes 2 and it break the loop and print Damn!
*/

