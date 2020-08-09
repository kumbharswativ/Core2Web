'''
Write a Program that replaces every occurrence of 1 with
maximum digit from that number if user provides the number.
Input: 121145
Output: 525545

'''

n=str(input("Input:"))
n1=list(n)
r=n.replace('1',max(n))
n1.clear()
n1.append(r)
print("output:",''.join(n1[:]))
