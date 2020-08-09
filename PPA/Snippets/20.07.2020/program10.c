#include<stdio.h>
void main(){
	int a=1;
	
	switch(a,a+1){
		
		case 1 :
			printf("PPA");
			break;
			
		case 2 :
			printf("JAVA");
			break;
			
		default:
			printf("core2web");
			break;
	}
}

/*
Output:
	JAVA
----------------------------------------------------
Exp:
	here for switch (a, a+1) acts as operator and after computation 
	of a+1 final value is 2
	
	switch(a,a+1) => switch(1,1+1) => switch(2)
	
	hence compiler will look for case 2 ans code within that case 
	will get executed
	
	so ans is java 
	
*/
