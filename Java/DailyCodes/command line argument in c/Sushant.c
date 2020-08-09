/*command line argument in c*/

#include<stdio.h>
void main(int argc,char* argv[]){	//int argc->gives the count of variables
					//char*-> It is a string
					
					//void main(int argc,char* argv[]) -> void main(int argc,char** argv)
	
	printf("%d\n",argc);	//gives the counnt of variables
	printf("%s\n",argv[0]);
	printf("%s\n",argv[1]);
	printf("%s\n",argv[2]);
	printf("%s\n",argv[3]);
	printf("%s\n",argv[4]);
}
