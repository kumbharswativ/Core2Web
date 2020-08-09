#include<stdio.h>
void main(){
	int x=10;
	
	switch(x){
		case 5+5:
			printf("5+5\n");
			break;
			
		case 6+4:
			printf("6+4\n");
			break;
		
		case 10:
			printf("10\n");
			break;
			
		default:
			printf("In default\n");
			break;
	}
}

/*
output:

switchDemo14.c: In function ‘main’:
switchDemo14.c:10:3: error: duplicate case value
   10 |   case 6+4:
      |   ^~~~
switchDemo14.c:6:3: note: previously used here
    6 |   case 5+5:
      |   ^~~~
switchDemo14.c:14:3: error: duplicate case value
   14 |   case 10:
      |   ^~~~
switchDemo14.c:6:3: note: previously used here
    6 |   case 5+5:
      |   ^~~~

*/
