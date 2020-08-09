/*
Write a program which accepts the month no provide that no to switch case and print the no. of
days in that month
Input : Enter month number : 7
Output : July has 31 days
*/

#include<stdio.h>
void main(){
	int m;
	printf("Enter Number of month\n");
	scanf("%d",&m);
	
	switch(m){
		case 1:
			printf("January has 31 days\n");
			break;
		case 2:
			printf("February has 28 or 29 days\n");
			break;
		case 3:
			printf("March has 31 days\n");
			break;
		case 4:
			printf("April has 30 days\n");
			break;
		case 5:
			printf("May has 31 days\n");
			break;
		case 6:
			printf("June has 30 days\n");
			break;
		case 7:
			printf("July has 31 days\n");
			break;
		case 8:
			printf("August has 31 days\n");
			break;
		case 9:
			printf("september has 30 days\n");
			break;
		case 10:
			printf("october has 31 days\n");
			break;
		case 11:
			printf("November has 30 days\n");
			break;
		case 12:
			printf("December has 31 days\n");
			break;
		default:
			printf("Enter correct month number\n");
			break;
	}
}
