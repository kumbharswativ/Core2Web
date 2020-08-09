a=1
b=7
for i in range(7):
    
    for j in range(7):
        if(i+j<=2 or j-i>=4 or i-j>=4 or i+j>=10):
            print(" ",end=" ")
        else:
            if(i<=3):
                print(a+i,end=" ")
            else:
                print(b-i,end=" ")
    print(" ")
