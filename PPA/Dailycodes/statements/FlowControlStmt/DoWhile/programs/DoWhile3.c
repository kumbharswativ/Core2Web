#include<stdio.h>
void main(){
	char agree;
	do{
		int ch;
		
		printf("Welcome\n");
		printf("1.Shopping\n");
		printf("2.PVR\n");
		printf("3.Food\n");
		printf("4.Playstation\n");
		
		printf("Enter your choice:\n");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:
				printf("wrogn,LP\n");
				break;
				
			case 2:
				printf("Dil Bechara\n");
				break;
				
			case 3:
				printf("Biryani\n");
				break;
				
			case 4:
				printf("Football\n");
				break;
				
			default:
				printf("Wrong choice\n");
				break;
		}
		printf("Do you Want to continue:\n");
		scanf(" %c",&agree);
	}while(agree=='y' || agree=='Y');
}




