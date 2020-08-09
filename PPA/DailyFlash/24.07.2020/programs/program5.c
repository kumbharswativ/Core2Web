/*
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/
#include<stdio.h>
void main(){
	
	for(int i=1;i<=5;i++){
		int num=i;
		for(int k=4;k>=i;k--){
			printf("  ");
		}
		for(int j=1;j<=i;j++){
			
			printf(" %d",num);
			num--;
		}
		
		printf("\n");
		
	}
}
