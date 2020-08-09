#include<stdio.h>
void main(){
	int x=10;
	for(int i=1;i<=10;i++){
		goto forDemo;
	}
	forDemo:
		printf("Printing.....\n");
}
