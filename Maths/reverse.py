# Given an integer N return the reverse of the given number.

n = -12345
rev = 0

if(n<0):
    sign = -1
else:
    sign = 1

n = abs(n)

while n > 0:
    digit = n % 10         
    rev = rev * 10 + digit 
    n = n // 10     
rev = sign * rev       

print(rev)
    