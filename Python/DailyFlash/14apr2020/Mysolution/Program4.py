a=1
b=65
c=7

for i in range(7):
    
    for j in range(7):
        if(i+j<=2 or j-i>=4 or i-j>=4 or i+j>=10):
            print(" ",end=" ")
        else:
            if(i<3):
                if(i%2==0):
                    print(a+i,end=" ")
                else:
                    print(chr(b),end=" ")
                
            elif(i==3):
                print(chr(66),end=" ")
            
            else:
                if(i%2==0):
                    print(c-i,end=" ")
            
                else:
                    print(chr(b),end=" ")
                
    print(" ")
