#include<stdio.h>
#define Core2Web(a) a
void main(){
	int a = 1;
	switch(a){
		case Core2Web(1) :
			printf("PPA ");
			break;
		
		case Core2Web(2):
			printf("JAVA ");
			break;
	}
}

/*
Output:
	PPA
-----------------------------------------------------------------------
Exp:
	macro identifiers are allowed as case labels
		here  Core2Web(a) is c macro we have defined which will
		have a value of a
		
		at the time of preprocessing values of macros get replaced by the actual value
		
		after compilation of code
		
		#define Core2Web(a) a => core2Web(1)
		
		hence wherever in the program core2web(1)is there it will get replaced by value 1
		and case 1 is gets executed sa ans is PPA
*/
