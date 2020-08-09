#include<stdio.h>
void main(){
	int stud_age[5]={19,20,21,22,12,18,23};	//It gives warning as excess elements in array initializer, because we have specify the size of array as 5 but we are adding more elements into the array
	
	
	printf("%d",stud_age);		//it prints garbage value
}
