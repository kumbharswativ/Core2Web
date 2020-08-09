/*
​ Write a program to print alphabets in reverse order between y to j
Ip -> y j
Op -> y x w v u ... j
*/

#include<stdio.h>
void main(){
	char i,j;
	printf("Enter starting number:\n");
	scanf("%c",&i);
	
	printf("Enter Ending number:\n");
	scanf(" %c",&j);
	for(int c=i;c>=j;c--){
		printf("%c\n",c);
	}
}
