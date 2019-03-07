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

int minimum(int a, int b, int c)
{
    return min( min(a, b), c);
}

int solve(string a, string b)
{
    int n = a.length(), m = b.length();

    vector< vector<int> > dp(n+1, vector<int>(m+1));

    for(int i=0;i<=n;i++)dp[i][0]=i;
    for(int i=0;i<=m;i++)dp[0][i]=i;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            
            if(a[i-1]!=b[j-1]) dp[i][j] = minimum(dp[i-1][j]+1, dp[i][j-1]+1, dp[i-1][j-1]+1);
            else dp[i][j] = dp[i-1][j-1];
        }
    }

    return dp[n][m];

}

int main() {

    string a,b;
    cin>>a>>b;

    cout<<solve(a,b);


return 0;

}
