# Uses python3

def calc_fib(n):
    if n==1 or n==2:
        return 1
    if n==0:
        return 0
    a,b = 1,1

    for i in range(n-2):
        c = a+b
        a,b = b,c

    return c

    

n = int(input())
print(calc_fib(n))
