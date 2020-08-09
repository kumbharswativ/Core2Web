/*
 1 2 3 4 5
   3 4 5 6
     5 6 7
       7 8
         9

*/

#include<stdio.h>
void main(){
	int num=1;
	for(int row=1;row<=5;row++){
		int num2=num;
		for(int space=1;space<row;space++){
			printf("  ");
		}
		for(int col=5;col>=row;col--){
			printf(" %d",num2);
			num2++;
		}
		printf("\n");
		num+=2;
	}
}
