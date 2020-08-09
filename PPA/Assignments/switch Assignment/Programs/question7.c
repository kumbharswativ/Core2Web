/*
Write a program in c in which students should enter marks of 5 different subjects. If all subject
having above passing marks add them and provide to switch case to print grades(first class
second class), if student get fail in any subject program should print “You failed in exam”
*/

#include<stdio.h>
void main(){
	int cs,m3,mp,cg,db,x;
	float total,z;
	
	printf("Enter marks of five subject\n");
	scanf("%d %d %d %d %d",&cs,&m3,&mp,&cg,&db);
	
	total=cs+m3+mp+cg+db;
	z=(total/500)*100;
	
	x=z/10;
	printf("x=%d\n",x);
	
	switch(x){
		case 10:
			printf("first class with dist.\n");
			break;
			
		case 9:
			printf("first class\n");
			break;
			
		case 8:
			printf("second class\n");
			break;
			
		case 7:
			printf("third class \n");
			break;
		
		case 6:
			printf("pass class \n");
			break;
		
		case 5:
			printf("pass class\n");
			break;
		
		default:
			printf("Tou have failed\n");
			break;
	}
}




