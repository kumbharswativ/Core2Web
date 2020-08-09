'''
Write a Program to Print following Pattern.
        D  
      C D  
    B C D  
  A B C D  

'''


n=68
for i in range(1,5):
	for j in range(5-i,0,-1):
		print(" ",end=" ")
	for j in range(1,i+1):
		ch=chr(n)
		print(ch,end=" ")
		n=n+1
	print(" ")
	n=n-1
	n=n-i
