
def prints(n):
    if(n==0):
        return
    print(n)
    prints(n-1)
prints(5)
