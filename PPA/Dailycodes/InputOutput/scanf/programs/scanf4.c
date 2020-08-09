#include<stdio.h>
void main(){
	int a,b,ans;
	
	printf("Enter values for a and b\n");
	scanf("%d%d",&a,&b);
	
	ans=a+b;
	printf("Addition=%d\n",ans);
	
	ans=a-b;
	printf("substraction=%d\n",ans);
	
	ans=a*b;
	printf("multiplication=%d\n",ans);
	
	ans=a/b;
	printf("Division=%d\n",ans);
	
	ans=a%b;
	printf("mod=%d\n",ans);
}
