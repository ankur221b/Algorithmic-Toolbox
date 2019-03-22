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

long bottom_up(int capacity, int n, int weight[])
{
  long dp[n+1][capacity+1];

  for(int i=0;i<=n;i++)dp[i][0]=0;
  for(int i=0;i<=capacity;i++)dp[0][i]=0;

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=capacity;j++)
    {
      if(weight[i-1]>j)
      {
        dp[i][j] = dp[i-1][j];
      }
      else
      {
        dp[i][j] = max(dp[i-1][j], weight[i-1] + dp[i-1][j-weight[i-1]]);
      }
    }
  }
    /*
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=capacity;j++)cout<<dp[i][j]<<" ";
        cout<<endl;
    }*/

  return dp[n][capacity];

  delete dp;
}

int main() {

   int capacity, n;

   cin>>capacity>>n;

   int weight[n];
   for(int i=0;i<n;i++)cin>>weight[i];

   cout<<bottom_up(capacity, n, weight);

return 0;

}
