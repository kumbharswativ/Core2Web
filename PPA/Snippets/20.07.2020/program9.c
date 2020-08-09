#include<stdio.h>
void main(){
	switch(0){
		case '0' :
			printf("PPA");
			break;
		
		case 'a' :
			printf("JAVA");
			break;
			
		default :
			printf("core2web");
			break;
	}
}

/*
output:
	core2web
-----------------------------------------------------------
Exp:
	here we are passing 0 to switch but there is no case 
	given for 0 so default will get executed
	
	so ans is core2web
*/
