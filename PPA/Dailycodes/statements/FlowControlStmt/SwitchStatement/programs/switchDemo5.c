#include<stdio.h>
void main(){
	int a=1;
	
	switch(a){
		case 1:
			printf("one\n");	//one 
			break;
		case 2:
			printf("Two\n");	
			break;
		case 3:
			printf("Three\n");	
			break;
		case 4:
			printf("Four\n");	
			break;
			
	}
	printf("outside switch\n"); // outside switch
}

/*
	break  is used to break the case after it gets true.
*/
