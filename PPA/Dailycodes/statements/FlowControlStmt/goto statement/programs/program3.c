#include<stdio.h>
void main(){
	printf("goto statement\n");
	
	goto goodAfternoon;
		printf("After goodAfternoon\n");
	goodAfternoon:
		printf("good Afternoon\n");
}
