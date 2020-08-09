#include<stdio.h>
void main(){
	int a=1;
	
	switch(a){
		case 1:
			printf("one\n");	//one 
		case 2:
			printf("Two\n");	//Two
		case 3:
			printf("Three\n");	//Three
		case 4:
			printf("Four\n");	//Four
			
	}
	printf("outside switch\n"); // outside switch
}

/*
	If the condition is true, it will execute all the remaining statements as the case is not  break.
*/
