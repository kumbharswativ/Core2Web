'''
Q. write a program to check if a year is leap year or not.
{note: if a year is divisible by 4 then it is leap year but if the year is century year like 2000,1900,2100 then it must be divisible by 400}
'''

x=int(input("Enter a year"))

if(x%4==0):
	print("it is a leap year")
elif(x%400==0):
	print("it is a leap year")
elif(x%100==0):
	print("it is a leap year")
else:
	print("it is not a leap year")

