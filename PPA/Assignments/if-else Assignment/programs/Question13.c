#include<stdio.h>
void main(){
	float n1, n2, n3;
	scanf("n1=%d\nn2=%d\nn3=%d\n",&n1,&n2,&n3);
	
	if(n1 >= n2 && n1 >= n3){
		printf("Largest number: %d",n1);
		}
	
	if(n2 >= n1 && n2 >= n3){
		printf("Largest number: %d",n2);
		}
	
	if(n3 >= n1 && n3 >= n2) {
		printf("Largest number: %d",n3);
		}
}
/*
----------------------------------------------------------------------------------------------------------------------
output:

Question13.c: In function ‘main’:
Question13.c:4:13: warning: format ‘%d’ expects argument of type ‘int *’, but argument 2 has type ‘float *’ [-Wformat=]
    4 |  scanf("n1=%d\nn2=\n%dn3=%d\n",&n1,&n2,&n3);
      |            ~^                  ~~~
      |             |                  |
      |             int *              float *
      |            %e
Question13.c:4:22: warning: format ‘%d’ expects argument of type ‘int *’, but argument 3 has type ‘float *’ [-Wformat=]
    4 |  scanf("n1=%d\nn2=\n%dn3=%d\n",&n1,&n2,&n3);
      |                     ~^             ~~~
      |                      |             |
      |                      int *         float *
      |                     %e
Question13.c:4:27: warning: format ‘%d’ expects argument of type ‘int *’, but argument 4 has type ‘float *’ [-Wformat=]
    4 |  scanf("n1=%d\nn2=\n%dn3=%d\n",&n1,&n2,&n3);
      |                          ~^            ~~~
      |                           |            |
      |                           int *        float *
      |                          %e
Question13.c:7:28: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
    7 |   printf("Largest number: %d",n1);
      |                           ~^  ~~
      |                            |  |
      |                            |  double
      |                            int
      |                           %f
Question13.c:11:28: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
   11 |   printf("Largest number: %d",n2);
      |                           ~^  ~~
      |                            |  |
      |                            |  double
      |                            int
      |                           %f
Question13.c:15:28: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
   15 |   printf("Largest number: %d",n3);
      |                           ~^  ~~
      |                            |  |
      |                            |  double
      |                            int
      |                           %f
------------------------------------------------------------------------------------------------------------------------
Explanation:
	if we want to use float datatype then we have to use %f as a format specifier,%d is used
	
-------------------------------------------------------------------------------------------------------------------------	
*/


