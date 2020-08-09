 '''
 **not runing
 '''
for  i in range(4):
	for j in range(7):
		if(i+j<=2 or j-i>=4):
			print(" ",end=" ")
		else:
			n=int(input("Input:"))
			n1,n2=0,1
			count=0
			if(n<0):
				break
			elif(n==1):
				print(n1,end=" ")
			else:
				while(count<n):
					print(n1,end=" ")
					nth=n1+n2
					n1=n2
					n2=nth
					count+=1		
	print(" ")
	
