#include<stdio.h>
void main(){
	int a=2;
	switch(a){
		case a :
			printf("PPA");
			break;
			
		case 2:
			printf("JAVA");
			break;
			
		default :
			printf("core2web");
			break;
			
	}
}

/*
output:
	compile time error
----------------------------------------------------------
Exp:
	we can not use variables as case label as  it requires constant values
*/
