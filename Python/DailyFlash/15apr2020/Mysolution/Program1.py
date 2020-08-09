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
for i in range(0,len(arr3)):
    for j in range(i+1,len(arr3)):
        if(arr3[i]<arr3[j]):
            temp=arr3[i]
            arr3[i]=arr3[j]
            arr3[j]=temp
print()
            
print("Array after sorting :",end=" ")
for i in range(len(arr3)):
    print(arr3[i],end=" ")
print()

