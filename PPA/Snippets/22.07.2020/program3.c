#include<stdio.h>
void main(){
	int check=2;
	switch(check){
		case 1: printf("D.W.Steyn");
		case 2: printf("M.G.Johnson");
		case 3: printf("Mohammad Asif");
		default: printf("M.Muralidaran");
	}
}

/*
Output:
	M.G.JohnsonMohammad AsifM.Muralidaran
---------------------------------------------------------------------
Exp:
	the answer is M.G.JohnsonMohammad AsifM.Muralidaran  because 
	check=2 and case 2 gets executed but we have not break statement
	after case so below case also get executed without checking the 
	condition is true or false.
*/
