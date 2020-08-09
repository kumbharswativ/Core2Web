/*
         25
      16 25
    9 16 25
  4 9 16 25
1 4 9 16 25

*/

#include<stdio.h>
void main(){
	
	for(int i=1;i<=5;i++){
		int num=1;
		for(int k=4;k>=i;k--){
			printf("  ");
			num++;
		}
		for(int j=1;j<=i;j++){
			
			printf(" %d",num*num);
			num++;
		}
		
		printf("\n");
		
	}
}
