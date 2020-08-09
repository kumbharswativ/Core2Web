/*
Write a C Program that accepts a character from user and prints whether
that character is a consonant or a vowel.
Input: Enter Character: a
Output: a is a vowel
*/

#include<stdio.h>
void main(){
	char c;
	printf("Enter a character:\n");
	scanf("%c",&c);
	if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
		printf("%c is vowel\n",c);
	}else{
		printf("%c is consonant\n",c);
	}
}
