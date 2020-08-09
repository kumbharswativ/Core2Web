/*
Write a C Program to take character from user and print whether it's in
upper case or in lower case.
Input: A
Output: Entered character is UPPERCASE character
*/

#include<stdio.h>
void main(){
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=90){
		printf("Entered character is UPPERCASE character\n");
	}else{
		printf("Entered character is lowercase character\n");
	}
}
