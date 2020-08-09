/*
What does the following C statement mean write detailed explanation?
scanf("%7s", str);
*/

when we use %7s in scanf it means that compiler only takes upto 7 characters as a input
 Eg:
 	if we have string as "World"
 	and scanf("%7s",str) then it will take input as whole -> w o r l d
 	when scanf("%4s",str) then it will take input as -> w o r l 
	when scanf("%2s",str) then it will take input as -> w o

