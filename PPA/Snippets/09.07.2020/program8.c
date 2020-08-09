#include<stdio.h>
void main(){
	int x=a,a=3,b=6;	//error: ‘a’ undeclared (first use in this function)

	printf("%d",x);
	printf("%d",a);
	printf("%d",b);
}

/*
output: 
	compile time error
	
Exp:
	int x=a,a=3,b=6
	the initialization goes from left to right so at the first initialization x=a

	int x=a,a=3,b=6
	
	compiler not found a variable which is not declared so it gives error that a is undeclared 
	
	if we take number instead of a then program works properly and gives output perfectly
	beacuse at the time of initialization it will get value ie
	int x=4,a=3,b=6
	
	initialization is done in order;
	1. x=4
	2. a=3
	3. b=6
*/
