# Uses python3
import sys


def pisano(n,m):
    if m==2:
        return 3
    if m==3:
        return 8
    fib, mod = [], []
    fib.append(0)
    fib.append(1)
    mod.append(0%m)
    mod.append(1%m)
    
    period = -1
    for i in range(2,n+1):
        c = fib[i-2]+fib[i-1]
        fib.append(c)
        mod.append(c%m)
        #print(mod[i])
        if mod[i]==1 and mod[i-1]==0:
            period = i-1
            break
        
    return period

def calc_fib(n,m):
    if n==1 or n==2:
        return 1
    if n==0:
        return 0
    a,b = 1, 1

    for i in range(n-2):
        c = a+b
        a,b = b,c
    
    return c%m

#sum(fib(n)) == fib(n+2)-1


if __name__ == '__main__':
    input = int(input())
    n = int(input)
    if n==0:
        print(0)
        sys.exit()
    if n<10:
        fibo = calc_fib((n+2), 10)
        if fibo-1==0:
            print(9)
        else:
            print(fibo-1)
        sys.exit()
    period = pisano(n+2,10)
    #print(period)
    fibo = calc_fib((n+2)%period, 10)
    if fibo==0:
            print(9)
    else:
            print(fibo-1)







    
    
