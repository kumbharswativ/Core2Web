// Right Shift operator


#include<stdio.h>

void main() {

	int x = 33,ans = 0;
        /*
	 * 33 in binary = 00100011
         *        33>>3 = 00000100011  (right shift by 3 bits)
         *         ans   = 00000100  ( 4 in binary)
	 */

	ans = x >> 3;

	printf("%d\n",ans);		// 4
}
