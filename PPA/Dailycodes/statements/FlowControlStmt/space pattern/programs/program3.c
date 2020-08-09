/*
       D
     D C
   D C B
 D C B A

*/
#include<stdio.h>
void main(){
	
	for(int i=1;i<=4;i++){
		char ch='D';
		for(int k=3;k>=i;k--){
			printf("  ");
		}
		
		
		for(char j=1;j<=i;j++){
			
			printf(" %c",ch);
			ch--;
		}
		ch++;
		
		printf("\n");
	}
}
