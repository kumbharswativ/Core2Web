#include<stdio.h>
void main(){
	long num=9;
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		
		printf("%ld ",num);
		num=num*10+9;
		
	}
	printf("\n");
}
