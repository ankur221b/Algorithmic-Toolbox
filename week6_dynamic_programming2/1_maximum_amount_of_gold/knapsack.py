# Uses python3

def bottom_up(cap, n, weight):
    dp =[ [-1 for j in range(cap+1)] for i in range(n+1) ]

    for i in range(n+1):
        dp[i][0]=0
    for i in range(cap+1):
        dp[0][i]=0

    for i in range(1,n+1):
        for j in range(1, cap+1):
            if weight[i-1]>j:
                dp[i][j] = dp[i-1][j]
            else:
                dp[i][j] = max(dp[i-1][j], weight[i-1] + dp[i-1][j-weight[i-1]])
    
    return dp[n][cap]



cap,n =map(int,input().split())

weight = list(map(int, input().split()))

print(bottom_up(cap, n, weight))
