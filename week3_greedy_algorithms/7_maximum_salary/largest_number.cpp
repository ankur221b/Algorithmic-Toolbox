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

bool cmp(string a, string b)
{
  return a+b > b+a ;
}

int main() {

    int n;
    cin>>n;
    string v[n];

    for(int i=0;i<n;i++)cin>>v[i];
    sort(v,v+n,cmp);

    for(auto i:v)cout<<i;


}
