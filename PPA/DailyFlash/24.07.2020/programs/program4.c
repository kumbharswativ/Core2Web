/*
        E
      D E
    C D E
  B C D E
A B C D E

*/
#include<stdio.h>
void main(){
	
	for(int i=1;i<=5;i++){
		int num=1;
		char ch='A';
		for(int k=4;k>=i;k--){
			printf("  ");
			num++;
			ch++;
		}
		for(int j=1;j<=i;j++){
			
			printf(" %c",ch);
			ch++;
		}
		
		printf("\n");
		
	}
}
