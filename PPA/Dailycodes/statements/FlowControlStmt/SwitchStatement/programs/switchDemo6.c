#include<stdio.h>
void main(){
	int a=1;
	int b=2;
	
	switch(a){
		case 1:
			printf("one\n");	//one 
		
	}
	printf("outside first switch\n"); // outside switch
	
	switch(b){
		case 2:
			printf("Two\n");	//two
		
	}
	printf("outside second switch\n"); // outside second switch
}


