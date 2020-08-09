#include<stdio.h>
int main(){
	int a=10;
	if(a==10){
		printf("Hello...");
		break;
		printf("Ok");
	}
	else{
		printf("Hii");
	}
	return 0;
}

/*
output:
	error: break statement not within loop or switch
-----------------------------------------------------------------
Exp:
	usually break statement is used to come out from a looping
	block of execution for instance for loop, while loop, do while loop,etc
	but in above snippet we are using it inside a if else block whic is not a 
	looping statement since it will only get executed once,
	and hence the compiler will through a error as "break statement not within a loop
	 or switch"  
*/
