/*
	25 25 25 25 25 
	16 16 16 16 
	9 9 9 
	4 4 
	1 

*/

#include<stdio.h>
void main(){

	int x;
	printf("enter a number:");
	scanf("%d",&x);
	int a=x;
	for(int i=1;i<=a;i++){
		for(int j=a;j>=i;j--){
			printf("%d ",x*x);
		}
		printf("\n");
		x--;
	}
}
