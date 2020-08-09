n=0
for i in range(5):
	for j in range(3):
		if(i+j<=1 or i-j>=3):
			print("  ",end=" ")
		else:
			print(n,end=" ")
		n+=1
	print()
	n+=7
