#include<stdio.h>
void main(void){
	int aNum = 0;
	char aChar;

	if(!aNum){
		printf("Inside First If...\n");
		aNum += 20;
		aChar = "T";
	}

	if(aNum % 4 != 0){
		printf("Inside Second If...\n");
		aNum -= 20;
		aChar = "F";
	}

	if(aNum == 0) {
		printf("Inside Third If...\n");
		aChar = "T";
	}
	
	printf("After all IF, Values Are..., %d & %c\n", aNum, aChar);
}

/*
-------------------------------------------------------------------------------------------------------------------------
output:
	Question10.c: In function ‘main’:
Question10.c:9:9: warning: assignment to ‘char’ from ‘char *’ makes integer from pointer without a cast [-Wint-conversion]
    9 |   aChar = "T";
      |         ^
Question10.c:15:9: warning: assignment to ‘char’ from ‘char *’ makes integer from pointer without a cast [-Wint-conversion]
   15 |   aChar = "F";
      |         ^
Question10.c:20:9: warning: assignment to ‘char’ from ‘char *’ makes integer from pointer without a cast [-Wint-conversion]
   20 |   aChar = "T";
---------------------------------------------------------------------------------------------------------------------------
Explanation :
	In above program character is defined as -> aChar="T" but here T is considered as string
	if we want to define character then we have to char* but if we want to define character then 
	the variable  should be written as ->'T'.
----------------------------------------------------------------------------------------------------------------------------
corrected code:

#include<stdio.h>
void main(void){
	int aNum = 0;
	char aChar;

	if(!aNum){
		printf("Inside First If...\n");
		aNum += 20;
		aChar = 'T';
	}

	if(aNum % 4 != 0){
		printf("Inside Second If...\n");
		aNum -= 20;
		aChar = 'F';
	}

	if(aNum == 0) {
		printf("Inside Third If...\n");
		aChar = 'T';
	}
	
	printf("After all IF, Values Are..., %d & %c\n", aNum, aChar);
}

---------------------------------------------------------------------------------------------------------------------------

*/







