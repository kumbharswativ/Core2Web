s=input("Enter a string:")
for i in range(7):
	for j in range(4):
		if(j-i>=1 or i+j>=7):
			print(" ",end=" ")
		else:
			print(s[j],end=" ")
	print(" ")
