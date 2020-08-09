m,n=[int(x)for x in input("Enter the number of rows and columns:").split()]
l=[]
print("Elements on matrix 1:")
for i in range(0,m):
    l. append([])
for i in range(0,m):
    for j in range(0,n):
        l[i].append(int(input()))
l1=[]
print("Elements in matrix 2:")
for i in range(0,m):
    l1.append([])
for i in range(0,m):
    for j in range(0,n):
        l1[i].append(int(input()))
if(l==l1):
    print("Both matrices are equal ")
else:
    print("not equal ")
