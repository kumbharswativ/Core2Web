'''
Write a Program which accepts date month and year from user and
checks for the validity of date according to month.
Input : 30/02/2018
Output : Date doesn’t exists!!..

'''

year = int(input("Enter year: "))
month = int(input("Enter month: "))
day = int(input("Enter day: "))

if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12):
	m=31
elif (month == 4 or month == 6 or month == 9 or month == 11):
	m=30
elif (year % 4 == 0 and year % 100 != 0 or year % 400 == 0):
	m=29  
else:
	m=28

if (month < 1 or month > 12):
    print("Date doesn't exist.")
elif (day < 1 or day > m):
    print("Date doesn't exist.")
else:
    print("Date Exist.")	



