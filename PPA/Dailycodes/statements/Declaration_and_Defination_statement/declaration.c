// Declaration statement

#include<stdio.h>
void main(){
	extern int a;	//Declaration
	
	
	//printf("a=%d\n",a);	//undefined reference to `a'
				//collect2: error: ld returned 1 exit status
				
				/* extern -> when we use extern it doesn't take space on ram hence it is used to declare the variable  */

	printf("size=%ld\n",sizeof(a));      //4     (even if it is declaration statemet it knows the size that the datatype going to take 							and hence it gives size as 4)
}
