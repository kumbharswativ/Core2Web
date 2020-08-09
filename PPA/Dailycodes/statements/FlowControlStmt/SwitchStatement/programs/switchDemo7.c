#include<stdio.h>
void main(){
	int a=1;
	float f=20.7;
	char ch= 'S';
	
	switch(a){
		case 1:
			printf("integer case\n");	//integer case
			break;
		}
		
		/*
	switch(f){	
		case 20.7:				......switch quantity not an integer
			printf("Float case\n");
			break;
		}
		*/
		
	switch(ch){
			
		case 'S':
			printf("char case\n");		//char case
	}
	printf("outside switch\n"); // outside switch
}

/*
  when we use float for switch then it will gives us error. beacuse float values  doesn't have ascii value
  
  when we use char for switch it checks the corresponding ascii value for a character and executes the case.
*/


