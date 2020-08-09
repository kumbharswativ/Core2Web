#include<stdio.h>
void main(){
	int a=0,i;
	for(int i=0;i<5;i++){
		a++;
		continue;
	}
	printf("%d\n",a);
}

/*
output:
	5
---------------------------------------------------------------------------------
Exp:
	you can see we difine i in two place one in body of main which is accessible
	whole main and another in for loop initialization part then you think which i
	is consider for iteration then ans is for loop i because it consider near i 
	in first iteration i is 0 it check condition of i which is true go to the
	body and increment a then a becomes 1
	after a++ you can see the continue statement which means go to the next iteration
	by skipping the part after continue but in our case there is nothing after continue
	so it iterate still i becomes 5 and then go to the print statement and print value
	value of a which is 5
	
	note : you try to print i value it give zero because it consider main scope i not
	in for loop i because it is not accessible out side the for loop
	
*/
