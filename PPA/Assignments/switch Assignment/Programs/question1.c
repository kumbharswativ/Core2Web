#include <stdio.h>
void main() {
	int a = 20;
	switch(~a) {
		case 20:
			printf("Case 20\n");
			printf("a= %d\n",a);
			break;
		case -20:
			printf("Case -20\n");
			printf("a= %d\n",a);
			break;
		case -21:
			printf("case -21\n");
			printf("a= %d\n",a);
			break;
		default:
			printf("Default\n");
			Break;				//break;
	}
}

/*
Output:
	question1.c: In function ‘main’:
question1.c:19:4: error: ‘Break’ undeclared (first use in this function)
   19 |    Break;
      |    ^~~~~
question1.c:19:4: note: each undeclared identifier is reported only once for each function it appears in
---------------------------------------------------------------------------------------------------------------
Exp:
	in  default, break is written as Break
*/


