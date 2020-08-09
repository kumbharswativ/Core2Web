#include<stdio.h>
void main(){
	int x,y;
	int choice;
	printf("Enter two values\n");
	scanf("%d %d",&x, &y);
	
	printf("Enter your choice\n");
	printf("1 : Addition\n");
	printf("2 : substraction\n");
	printf("3 : multiplication\n");
	printf("4 : Division\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("Addition = %d\n",x+y);
			break;
			
		case 2:
			printf("Substraction = %d\n",x-y);
			break;
			
		case 3:
			printf("multiplication = %d\n",x*y);
			break;
		
		case 4:
			printf("Division = %d\n",x/y);
			break;
			
		default:
			printf("Enter correct choice\n");
			break;	
	}
}
