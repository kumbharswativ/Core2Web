#include<stdio.h>
void main(){
	int i=1,n;
	while(i<=100){
		printf("Enter a number:\n");
		scanf("%d",&n);
		
		if(n%4==0 && n%10==0){
			break;
			
		}else{
			printf("%d is not divisible by 4 and 10\n",n);
		}
		i++;
	}
	printf("out of while\n");
}
