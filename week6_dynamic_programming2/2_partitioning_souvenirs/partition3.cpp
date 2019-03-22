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

map<int,int> ma;

bool solve(int n, int sum, int v[])
{
    if(sum==0)return 1;

    if(n==0 && sum!=0)return 0;

    if(v[n-1]>sum)return 0;
    if(!ma[sum]) ma[sum] = solve(n-1,sum,v) || solve(n-1,sum-v[n-1],v); 
    return  ma[sum];


}

int main() {

  int n,sum=0;
  cin>>n;
  int v[n];

  for(int i=0;i<n;i++)
  {
      cin>>v[i];
      sum+=v[i];
  }


  if(sum%3)cout<<0;
  else cout<<solve(n,sum/3,v);

return 0;

}
