# Given a number ‘N’, find out the sum of the first N natural numbers

def SumN(n):
    if(n==0):
        return 0
    return (n) + SumN(n-1)

print(SumN(10))