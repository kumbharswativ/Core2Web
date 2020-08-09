from array import *
l=[int(x)for x in input("Enter elements of array:").split()]
l. sort()

arr=array("i",l)
for i in range(len(arr)):
    print(arr[i],end=" ")
print("second largest element is:",arr[-2],end=" ")
