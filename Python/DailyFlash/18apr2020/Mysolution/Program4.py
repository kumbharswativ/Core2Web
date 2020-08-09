for i in range(10):
    for j in range(10):
        if(j<=4):
            if(i-j<=-1 or i+j>=10):
                print(" ",end=" ")
            else:
                print("*",end=" ")
        else:
            if(i-j>=1 or i+j<=8):
                print(" ",end=" ")
            else:
                print("*",end=" ")
    print(" ")
