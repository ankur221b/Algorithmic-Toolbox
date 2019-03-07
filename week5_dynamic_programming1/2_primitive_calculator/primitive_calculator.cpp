#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define MAX 100001
#define MOD 1000000007

int solve(int n)
{
    int dp[n+1];

    dp[1]=0;

    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+1;

        if(i%2==0)dp[i] = min(dp[i],dp[i/2]+1);
        if(i%3==0)dp[i] = min(dp[i],dp[i/3]+1);
    }

    vector<int> path;
    int tmp=n,res;
    path.pb(n);
    while(tmp>1)
    {
        min_step = dp[tmp-1]+1;
        res= tmp-1;
        if(tmp%2==0)
        {
            if(dp[tmp/2]+1 < min_step)
            {
                min_step = dp[tmp/2]+1;
                res=tmp/2;
            }
        }
        if(tmp%3==0)
        {
            if(dp[tmp/3]+1 < min_step)
            {
                min_step = dp[tmp/3]+1;
                res=tmp/3;
            }
        }

        path.pb(res);
        tmp=res;
    }

    for(int i:path)cout<<i<<" ";

    return dp[n];
}

int main() {

    int n;
    cin>>n;

    cout<<solve(n); 


return 0;

}
