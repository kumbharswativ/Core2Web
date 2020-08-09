for i in range(7):
    for j in range(7):
        if(i+j<=2 or i-j>=4 or j-i>=4 or j+i>=10 or i+j==4 or i+j==6 or i+j==8):
            print(" ",end=" ")
        else:
            print("1",end=" ")
    print()
