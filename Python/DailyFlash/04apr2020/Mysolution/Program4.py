l=["H","E","L","L","O"]
for i in range(10):
    for j in range(5):
        if(i+j<=3 or i-j>=5):
            print(" ",end=" ")
        else:
            print(l[j],end=" ")
    print(" ")        


