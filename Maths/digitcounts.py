# Given an integer N, return the number of digits in N.
# Input:N = 7789                                
# Output: 4

n = 77892
c = 0

while(n>0):
    c = c +1
    n = n//10
print(c)