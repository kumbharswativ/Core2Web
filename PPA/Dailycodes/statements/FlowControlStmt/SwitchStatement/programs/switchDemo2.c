#include<stdio.h>
void main(){
	int a=1;
	
	switch(a){
		printf("Inside switch\n");		//warning (we cannot write printf directly inside the switch)
	}
	printf("outside switch\n"); // outside switch
}
