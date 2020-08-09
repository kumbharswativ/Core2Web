'''
Write a Program to Print following Pattern.
A A A A A
B B B B
C C C
D D
E
'''

num=65
for i in range(5):
	for j in range(i,5):
		ch=chr(num)
		print(ch,end=" ")
	j=j-1
		
	print(" ")
	num+=1
