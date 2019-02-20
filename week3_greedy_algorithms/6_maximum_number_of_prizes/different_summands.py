# Uses python3
import sys

def optimal_summands(n):
    summands = []
    #write your code here
    c=0
    tmp = (1+8*n)**0.5
    tmp = int((tmp-1)//2)
    for i in range(1,tmp):
        summands.append(i)
        c+=i
    
    summands.append(n-c)
    
    return summands

if __name__ == '__main__':
    
    n = int(input())
    summands = optimal_summands(n)
    print(len(summands))
    for x in summands:
        print(x, end=' ')
