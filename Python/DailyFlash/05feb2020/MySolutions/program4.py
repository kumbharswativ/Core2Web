'''
Write a Program to Print following Pattern.
a b c d
c d e
e f
g

'''


ch ='a'


for i in range(4):
	for j in range(4-i):
		print(chr(ord(ch)+(j)),end=" ")
		
	print("")
	ch = chr(ord(ch)+2)
