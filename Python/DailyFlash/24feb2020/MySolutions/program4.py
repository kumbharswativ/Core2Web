'''
write a program to print the following pattern.
0	0	0	0	0	
	1	2	3	4	
		4	6	8	
			9	12	
				16	
'''
a = [1,2,3,4]

for i in range(5):
    for j in range(5):
        print(" ",end="  ")if j<i else print(j*i,end="  ")
    print(" ")    
