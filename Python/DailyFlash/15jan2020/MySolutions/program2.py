'''
Q.write a program to take a integer ranging from 0 to 6 and print corresponding weekday
input:2
output: Wednesday
'''

x=int(input("enter a number"))

a={0:"Monday",1:"Tuesday",2:"Wednesday",3:"Thursday",4:"Friday",5:"Saturday",6:"Sunday"}

if(x==0):
	print(a[0])
elif(x==1):
	print(a[1])
elif(x==2):
	print(a[2])
elif(x==3):
	print(a[3])
elif(x==4):
	print(a[4])
elif(x==5):
	print(a[5])
elif(x==6):
	print(a[6])
	
else:
	print("error")

