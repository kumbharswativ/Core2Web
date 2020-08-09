#include<stdio.h>
void main(){
	float val;
	printf("Enter float value for val:\n");
	scanf("%f",&val);
	printf("%d\n",val);	// warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’
}
