/*
Write a C Program to print the character is vowel or consonant from ‘A’
to ‘Z’. Take the lower bound & upper bound of characters range from user.
Input:
Lower Bound of Range: C
Upper Bound of Range: F
Output:
C is Consonant
D is Consonant
E is Vowel
F is Consonant
*/

#include<stdio.h>
void main(){
	char l,u;
	printf("Lower bound of range:");
	scanf("%c",&l);
	
	printf("Upperbound of range:");
	scanf(" %c",&u);
	
	while(l<=u){
		if(l=='A'|| l=='E'||l=='I'||l=='O'||l=='U'||l=='a'|| l=='e'||l=='i'||l=='o'||l=='u'){
			printf("%c is a vowel\n",l);
		}
		else{
			printf("%c is consonant\n",l);
		}
		l++;
	}
}
