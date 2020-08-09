#include<stdio.h>
void main(){
	int a = 2;
	
	switch(a)
	
		case 1:
			printf("%d",a);
		case 2:
			printf("%d",a);
		default:
			printf("%d",a);
			break;
	}
}

/*
output:
	compile time error
-------------------------------------------------------------
Exp:
	syntax of switch case is
	
	switch(condition){
		case 1:
			break;
		case 2:
			break;
	}

	in above code {} are missing so it is a compile time error
*/
