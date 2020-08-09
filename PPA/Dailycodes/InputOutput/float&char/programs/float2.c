#include<stdio.h>
void main(){
	float val;
	printf("Enter float value for val :\n");
	scanf("%d",&val);		//scanf required %f as formay specifier but %d is given so it gives warning
	printf("%f\n",val);
}
