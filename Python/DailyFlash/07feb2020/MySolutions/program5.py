'''
Write a Program that prints following pattern.
= 2 3 4  
1 = 3 4  
1 2 = 4  
1 2 3 =  

'''
for i in range(1,5):
	for j in range(1,5):
		if(i==j):
			print("=",end=" ")
		else:
			print(j,end=" ")
			
	print(" ")
