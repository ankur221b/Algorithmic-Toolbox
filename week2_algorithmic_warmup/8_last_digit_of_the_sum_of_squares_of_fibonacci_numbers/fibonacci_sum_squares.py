# Uses python3
from sys import stdin

lst = []
lst.append(0)
lst.append(1)

for i in range(2,61):
        c = lst[i-1]+lst[i-2]
        lst.append(c)


if __name__ == '__main__':
    n = int(input())
    summ = lst[n%60]*lst[(n+1)%60]
    
    print(summ%10)
