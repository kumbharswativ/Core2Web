num=8

for i in range(4):
   
    for j in range(7):
        if(j-i<=-1 or i+j>=7):
            print(" ",end=" ")
        else:
            if(j<=3):
                print(num-j,end=" ")
            else:
                print(j+2,end=" ")
                
    print(" ")
