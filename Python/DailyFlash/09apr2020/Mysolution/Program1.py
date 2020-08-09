from array import *
num=int(input("Enter length of array:"))

l=list()
l2=list()

print(" Array1:")
for i in range(num):
        var=int(input())
        l. append(var)

print(" Array2:")
for i in range(num):
        val=int(input())
        l2. append(val)

arr1=array("i",l)
arr2=array("i",l2)
 
print("substraction is:")
for i in range(len(arr1)):
      print(arr1[i]-arr2[i],end=" ")
print(" ")
