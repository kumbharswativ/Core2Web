'''
Write a Program to Print following Pattern.
3
2 3 
1 2 3
0 1 2 3

'''
n=5

for i in range(n,0,-1):
	for j in range(n):
		if(j==i):
			i=i+1
			j=j-1
			print(j,end=" ")
	print(" ")



