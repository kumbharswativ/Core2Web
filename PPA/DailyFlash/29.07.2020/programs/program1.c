/*
 1 2 3 4 5
   4 6 8 10
    9 12 15
      16 20
         25
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
			printf(" %d",row*num2);
			num2++;
		}
		num++;
		printf("\n");
	}
}


