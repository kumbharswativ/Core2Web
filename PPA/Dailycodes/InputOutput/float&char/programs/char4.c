#include<stdio.h>
void main(){
	char ch;
	int i;
	float f;
	
	printf("Enter value for char\n");
	scanf("%c",&ch);
	//scanf(" %c",&ch)		..............if we want tp print char in between int or float(\n will not stored in 							char because)
	printf("Enter value for float\n");
	scanf("%f",&f);
	
	printf("Enter value for int\n");
	scanf("%d",&i); 
	
	printf("i=%d\n",i);
	printf("f=%f\n",f);
	printf("ch=%d\n",ch);
}
