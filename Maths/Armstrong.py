# Check if the Number is Armstrong
# An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

# Input: n = 153
# Output: true
# Explanation: Number of digits : 3.
# 13 + 53 + 33 = 1 + 125 + 27 = 153.
# Therefore, it is an Armstrong number.


n = 8
org = n
ans = 0


while(n>0):
    digit = n%10
    digits = list(map(int, str(n)))
    l = len(digits)
    sq = digit**l
    ans = ans + sq
    n  = n//10

if(org ==ans):
    print("TRUE")
else:
    print("FALSE")