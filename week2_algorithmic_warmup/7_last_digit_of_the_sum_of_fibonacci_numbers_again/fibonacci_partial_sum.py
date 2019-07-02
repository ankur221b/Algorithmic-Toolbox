# Uses python3
import sys

lst = []
lst.append(0)
lst.append(1)

for i in range(2,61):
        c = lst[i-1]+lst[i-2]
        lst.append(c)
a,b =map(int,input().split())

if a==b:
        print(lst[a%60]%10)
        sys.exit()

if a==0:
        sa=0
else:
        sa=lst[(a+1)%60]-1
sb = lst[(b+2)%60]-1
ans = (sb-sa)%10
if ans<0:
    ans=ans+10
print(ans)
