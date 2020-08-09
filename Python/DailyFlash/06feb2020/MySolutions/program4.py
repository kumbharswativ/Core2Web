'''
Write a Program to Print following Pattern.
		A
	     A	B
          A  B 	C
       A  B  C  D
'''
n=65
for i in range(4):
	for j in range(4-i,0,-1):
		print(" ",end=" ")
	for j in range(i+1):
		ch=chr(n)
		print(ch,end=" ")
		n=n+1
	print(" ")
	n=n-1
	n=n-i

