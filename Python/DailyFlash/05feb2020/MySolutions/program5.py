'''
Write a Program that prints following pattern.
         4
      3	 4
   2  3	 4
1  2  3	 4

'''

n=4
for i in range(1,5):
	for j in range(5-i,0,-1):
		print(" ",end=" ")
	for j in range(1,i+1):
		print(n,end=" ")
		n=n+1
	print(" ")
	n-=1
	n-=i	
