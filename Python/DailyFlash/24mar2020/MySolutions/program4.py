
'''
write a program to print the following pattern
*  
* *  
* * *  
* * * *  
* * *  
* *  
*  

'''
for i in range (0,4):
    for j in range(0, i + 1):
        print("*", end=' ')
    print(" ")

for i in range (4, 0, -1):
    for j in range(0, i -1):
        print("*", end=' ')
    print(" ")
