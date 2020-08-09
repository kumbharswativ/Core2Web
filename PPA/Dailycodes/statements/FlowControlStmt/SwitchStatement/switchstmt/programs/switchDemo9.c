#include<stdio.h>
void main(){
	int a=65;
	
	switch(a){
	
		case'A':
			printf("A-case");
			break;
			
		case'B':
			printf("B-case");
			break;
			
		case 65:
			printf("65-case");
			break;
	}
}

/*
output:
	switchDemo9.c: In function ‘main’:
	switchDemo9.c:15:3: error: duplicate case value
	   15 |   case 65:
	      |   ^~~~
	switchDemo9.c:7:3: note: previously used here
	    7 |   case'A':
	      |   ^~~~

*/
