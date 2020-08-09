'''
Write a Program that prints whether two numbers entered by user
are amicable numbers pair or not.
{Note: A Pair of two numbers can be Amicable if Sum of all perfect divisors of
First number is equal to second number and vice versa.
e.g: 220 & 284 are amicable pair since, sum of all perfect divisors of 220 is 284
and for 284 its 220}
Input:
First Number: 1184
Second Number: 1210
Output:
The Given numbers are Amicable Pair

'''

x=int(input('First Number: '))
y=int(input('Second Number: '))
sum1=0
sum2=0
for i in range(1,x):
    if x%i==0:
        sum1+=i
for j in range(1,y):
    if y%j==0:
        sum2+=j
if(sum1==y and sum2==x):
    print('Amicable!')
else:
    print('Not Amicable!')
