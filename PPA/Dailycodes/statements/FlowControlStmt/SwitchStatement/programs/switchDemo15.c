#include<stdio.h>
void main(){
	char ch='<';
	
	switch(ch){
		case'<':{
			int a=5;
			int b=0;
			switch(a && b){
				case 0:
					printf("false\n");
					break;
					
				case 1:
					printf("true\n");
					break;
			}
			break;
		}
		
		
		
		case'>':{
			int a=5;
			int b=0;
			switch(a || b){
				case 0:
					printf("false\n");
					break;
					
				case 1:
					printf("true\n");
					break;
			}
			break;
		}
		
		default:
			printf("In default\n");
			break;
	}
}
/*
output:
	false

*/




