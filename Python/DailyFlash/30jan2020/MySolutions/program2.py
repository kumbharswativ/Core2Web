'''
Write a Program that calculates Kinetic Energy of object with given
Mass & Velocity.
{Note: K.E. = 1⁄2 * m * v * v }
Input: Mass = 53kg
Velocity = 5m/s
Output: Kinetic Energy of that Object is: 662.5

'''
m=int(input("Enter mass:"))
v=int(input("Enter Velocity:"))
ke=1/2*m*v*v
print("Kinetic energy of that object is:",ke)
