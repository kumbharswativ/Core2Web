ch=65
for i in range(5):
	for j in range(3):
		if(i+j<=1 or i-j>=3):
			print(" ",end=" ")
		else:
			print(chr(ch),end=" ")
			ch+=1
	print(" ")
