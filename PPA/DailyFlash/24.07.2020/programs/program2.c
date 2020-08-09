/*
        0
      0 1
    0 1 0 
  0 1 0 1
0 1 0 1 0

*/

#include<stdio.h>
void main(){
	for(int i=1;i<=5;i++){
		for(int k=4;k>=i;k--){
			printf("  ");
		}
		for(int j=0;j<=i-1;j++){
			printf(" %d",j%2);
		}
		printf("\n");
	}
}
