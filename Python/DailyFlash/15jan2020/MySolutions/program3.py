'''
Q.write a program to take number of month and print the number of days in that month
input:4
output:April is a 30 day's month
'''

a={1:"January",3:"March",5:"May",7:"July",8:"August",10:"October",12:"December"}
b={2:"February",4:"April",6:"Jun",9:"September",11:"November"}
x=int(input("Enter month no:"))

if(x==1 or x==3 or x==5 or x==7 or x==8 or x==10 or x==12):
	print(a[x],"is a 31 days month")
elif(x==2 or x==4 or x==6 or x==9 or x==11):
	print(b[x],"is a 30 days month")
else:
	print("error")
