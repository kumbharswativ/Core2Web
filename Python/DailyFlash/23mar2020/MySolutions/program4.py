'''
write a program to print the following pattern
5 5 5 5 5 5 5  
  6 7 8 9 10    
    9 11 13      
      14   

'''

num=0
for i in range(4):
	n=5
	for j in range(7):
		if(j-i<=-1 or i+j>=7):
			print(" ",end=" ")
		else:
			print(n,end=" ")
		n=n+num
	print(" ")
	num=num+1
			
