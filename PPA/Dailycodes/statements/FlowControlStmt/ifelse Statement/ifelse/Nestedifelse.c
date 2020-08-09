#include<stdio.h>
void main(){
	int a=20,b=30,c=10;
	
	if(a>b){
		if(a>c){
			printf("a is greater\n");
		}else{
			printf("c is greater\n");
		}
	}else if(b>a){
		if(b>c){
			printf("b is greater\n");
		}else{
			printf("c is greater\n");
		}
	}else{
		printf("c is greater\n");
	}
}
