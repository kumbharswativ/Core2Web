#include<stdio.h>
void main(){
	int a=65;
	
	switch(a){
		case'A':
			printf("A-case\n");
			break;
			
		case'B':
			printf("B-case\n");
			break;
			
			
		case'65':
			printf("65-case\n");
			break;
	} 
}

/*
output:
	switchDemo10.c: In function ‘main’:
switchDemo10.c:15:7: warning: multi-character character constant [-Wmultichar]
   15 |   case'65':
      |       ^~~~

*/
