# Uses python3
import sys

def get_change(m):
    #write your code here
    c=0
    c+=m//10
    m%=10
    c+=m//5
    m%=5
    c+=m
    return c

if __name__ == '__main__':
    m = int(input())
    print(get_change(m))
