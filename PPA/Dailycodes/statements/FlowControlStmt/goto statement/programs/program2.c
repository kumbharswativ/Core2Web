#include<stdio.h>
void main(){
	int x=7;
	printf("goto statement\n");
	
	goodMorning:
		printf("Good morning!!!\n");
		printf("Have a nice day\n");
		x--;
	if(x<5)
		goto goodMorning;
}
