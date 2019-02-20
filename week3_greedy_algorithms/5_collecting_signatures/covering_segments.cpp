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

bool cmp(pair<ll,ll> a, pair<ll,ll> b)
{
    return a.ss < b.ss;
}

int main() {


    ll n,tmp;
    cin>>n;

    pair<ll,ll> v[n];

    for(int i=0;i<n;i++)
    {
        cin>>v[i].ff>>v[i].ss;
    }

    sort(v,v+n,cmp);

    vector<ll> points;
    tmp = v[0].ss;
    points.pb(tmp);

    for(int i=1;i<n;i++)
    {
        if(tmp<v[i].ff || tmp>v[i].ss)
        {
            tmp = v[i].ss;
            points.pb(tmp);
        }
    }

    cout<<points.size()<<"\n";

    for(auto i:points)
    {
        cout<<i<<" ";
    }
    
    
}
