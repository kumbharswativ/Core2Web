#include <stdio.h>
int main(){
	int a;
	switch(a = (sizeof(int) > -1)){
		case 1:printf("True\n");
			break;
		case 0: printf("False\n");
			break;
	}
	return 0;
}

/*
output:
	False
----------------------------------------------------------------------------------------
Exp:
	-1 is signed integer and sizeof(int) i.e 4 is a unsigned integer
	and representation of -1 in binary is greater than 4 
	so sizeof(int)<-1
	
	representation of -1 in binary ->  1 1 1 1 1 1 1 1 
	representation of 4 in binary  ->  0 0 0 0 0 1 0 0
----------------------------------------------------------------------------------------	
*/
