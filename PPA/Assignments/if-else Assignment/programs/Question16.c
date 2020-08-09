/*
Write a Program that detects whether the entered character is UPPER CASE,
lower case or a Special Character.
Input: *
Output: * is a Special Character.
*/

#include<stdio.h>
void main(){
	char ch;
	printf("Enter character\n");
	scanf("%c",&ch);
	
	if(ch>='A'&& ch<='Z'){
		printf("%c is a UPPER CASE character\n",ch);
	}
	
	else if(ch>='a'&& ch<='z'){
		printf("%c is a LOWER CASE character\n",ch);
	}
	else if(ch>='!' && ch<='/'){
		printf("%c is a special character\n",ch);
	}
	
}
