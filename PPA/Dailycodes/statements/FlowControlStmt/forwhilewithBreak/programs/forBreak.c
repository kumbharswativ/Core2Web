#include<stdio.h>
void main(){
	int n;
	for(int i=1;i<=10;i++){
		printf("Enter a number:\n");
		scanf("%d",&n);
		if(n%2==0)
			printf("%d is even number\n",n);
		else
			break;
	}
	printf("out of for\n");
}
