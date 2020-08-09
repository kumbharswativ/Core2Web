from array import *
l=list()
l1=list()
num=int(input("Enter length of array :"))
print("Enter elements of first array :")
for i in range(num):
    var=int(input())
    l. append(var)
print("Enter elements of second array :")
for j in range(num):
    val=int(input())
    l. append(val)
arr1=array("i",l)
arr2=array("i",l1)
arr3=arr1+arr2
print("Third array after concatenation:",end=" ")
for i in arr3:
    print(i,end=" ")
print()
l3=list(arr3)
l3.sort()
print("Array after sorting :",end=" ")
for i in l3:
    print(i,end=" ")
print()

