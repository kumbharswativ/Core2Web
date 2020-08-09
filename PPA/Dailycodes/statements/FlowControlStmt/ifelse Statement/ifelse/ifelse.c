#include<stdio.h>
void main(){
	int pass=123;
	char* username="swati";
	
	if(username=="swati" && pass==123){
		printf("Redirect to Home page\n");
	}else{
		printf("Invalid username and password\n");
	}
}
