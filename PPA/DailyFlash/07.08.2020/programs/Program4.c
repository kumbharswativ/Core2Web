/*
write a program which shows a menu card of a Burger house and give
the customer the choice of veg and non veg and each of them consist
of 4 different types of burger  and print the order at least and ask
them again for more using do while loop and nested switch

Input:

Welcome to Burger King please select from the following 
1.Veg
2.Non Veg

1
Veg Blasts
a.Veggie tikki Burger
b.Aloo Tikki Burger
c.Mushroom Veggie cheese Burger
d.Peanut Butter Sweet Potato Burger
*/

#include<stdio.h>
void main(){
	
		int ch;
		char choice;
		do{
			
			printf("1. Veg\n");
			printf("2. Non Veg\n");
			
			printf("Enter your choice:");
			scanf("%d",&ch);
			
			switch(ch){
				
				case 1:
					{
						printf("*****************Veg Blasts****************\n");
						printf("a. Veggie Tikki Burger\n");
						printf("b. Aloo Tikki Burger\n");
						printf("c. Mushroom Veggie Cheese Burger\n");
						printf("d. Peanut Butter Sweet Potato Burger\n");
					}
					break;
					
				case 2:
					{
						printf("*****************Non-Veg Blasts****************\n");
						printf("a. chicken chilli cheese melt\n");
						printf("b. chicken Whooper\n");
						printf("c. crispy chicken supreme\n");
					
					}
					break;
					
				default:
					printf("Wrong data\n");
					break;
					
			}
			printf("Do you want to continue?\n");
			scanf(" %c",&choice);
			
		}while(choice=='y' || choice=='Y');
}






