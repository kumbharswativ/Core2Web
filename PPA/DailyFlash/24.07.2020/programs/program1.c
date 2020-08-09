/*
	           A
	        B  C
	     C  D  E
	   D E  F  G
        E  F G  H  I  
	  	
	
*/
#include<stdio.h>
void main(){
		
	int num=0;	
	for(int i=1;i<=5;i++){
		char ch1='A';
		ch1=ch1+num;
		for(int k=4;k>=i;k--){
			printf("  ");
		}
		for(int j=1;j<=i;j++){
			
			printf(" %c",ch1);
			ch1++;
			
		}
		num++;
		printf("\n");
	
	}
}
