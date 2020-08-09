m,n=[int(x)for x in input("enter m(rows) and n(columns):").split()]
a=[int(x)for x in input("enter elements :").split()]
z=len(a)
for i in range(n):
    for j in range(m):
        print(a[1:z-a],end=" ")
    print()
