#include <stdio.h>
	void main() {
	int x = 10;
	int y = 20;
	switch(x) {
		case x:
			printf("Case 10\n");
			printf("x= %d\n",x);
			break;
		case y:
			printf("Case 20\n");printf("y= %d\n",y);
			break;
		default:
			printf("Default\n");
			break;
			
}

/*
Output:
	question2.c: In function ‘main’:
question2.c:6:3: error: case label does not reduce to an integer constant
    6 |   case x:
      |   ^~~~
question2.c:10:3: error: case label does not reduce to an integer constant
   10 |   case y:
      |   ^~~~
question2.c:16:1: error: expected declaration or statement at end of input
   16 | }
      | ^
-------------------------------------------------------------------------------------------
Exp:
	If we want to use character to case we have to enclose character in single coat
	as - case'x' 
	here it tries to access 10 in x but compiler doesn't allow it.
--------------------------------------------------------------------------------------------
corrected code :
	
	#include <stdio.h>
	void main() {
	int x = 10;
	int y = 20;
	switch(x) {
		case 'x':
			printf("Case 10\n");
			printf("x= %d\n",x);
			break;
		case 'y':
			printf("Case 20\n");printf("y= %d\n",y);
			break;
		default:
			printf("Default\n");
			break;
	}		
}
-----------------------------------------------------------------------------------------------
*/


