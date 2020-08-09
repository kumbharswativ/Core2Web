#include<stdio.h>
void main(){
	int x=10;
	int i=1;
	forDemo:
		printf("Printing.........\n");
	for(;i<=10;){
		i++;
		goto forDemo;
	}
	printf("After forDemo\n");
}
