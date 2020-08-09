a=65
var=71
for i in range(7):
    for j in range(4):
        if(j-i>=1 or i+j>=7):
            print(" ",end=" ")
        else:
            if(i<=3):
                print(chr(a+i),end=" ")
            else:
                print(chr(var-i),end=" ")    
    print(" ")  
