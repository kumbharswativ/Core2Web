'''
Write a Program to calculate Velocity of particle in the space having
Distance & Time Entered By User.
Input:
Distance: 100m
Time: 20sec
Output: The Velocity of a Particle roaming In space is 5m/s.
'''

d=int(input("Distance(km):"))
t=int(input("Time(hr):"))
v=d//t
print("The Velocity of a Particle roaming In space is",v)
