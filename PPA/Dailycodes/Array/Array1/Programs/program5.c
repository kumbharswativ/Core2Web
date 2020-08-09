#include<stdio.h>
void main(){
	int stud_age={19,20,21,22,12};	//It gives warning as excess elements in scalar initializer.Because we are trying to add 5 elements in a single variable 
	printf("%d",stud_age);		//It prints the first element from the list.
}
