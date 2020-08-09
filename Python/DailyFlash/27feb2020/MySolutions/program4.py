'''
write a program to print the following pattern
A B D G  
G H J  
J K  
K  

'''
a=70
for i in range(4,0,-1):
	a=a-i-1
	b=0
	for j in range(i):
		print(chr(a),end=" ")
		b=b+1
		a=a+b
	print(" ")
