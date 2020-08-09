#include<stdio.h>
void main(){
	int a=0,i=0;
	for(i=0;i<5;i++){
		a++;
		if(i==3)
			break;
	}
	printf("%d\n",a);
}

/*
output:
	4
-----------------------------------------------------------------
Exp:
	in for loop body you can see the if condition in that condition
	if i becomes 3 then it break the loop and jump outside the for
	loop
	so the iteration is done four times so the a value increment four 
	times and print after for loop
*/
