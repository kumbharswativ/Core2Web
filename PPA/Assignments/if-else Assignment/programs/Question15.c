/*
Write a Program that check whether the entered character by user is vowel or
Consonant.
Input: A
Output: A is Vowel.
*/

#include<stdio.h>
void main(){
	char c;
	printf("Enter the character\n");
	scanf("%c",&c);
	
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I'|| c=='O' || c=='U'){
		printf("%c is a vowel\n",c);
	}else{
		printf("%c is consonant\n",c);
	}
}
