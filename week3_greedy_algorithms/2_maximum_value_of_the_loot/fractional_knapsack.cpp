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

bool cmp(pair<double,double> a, pair<double,double> b)
{
    return (a.ff/a.ss) > (b.ff/b.ss);
}

int main() {


    ll n,w;
    double tot=0;
    cin>>n>>w;

    pair<double,double> v[n];

    for(int i=0;i<n;i++)
    {
        cin>>v[i].ff>>v[i].ss;
    }

    sort(v,v+n,cmp);

    for(int i=0;i<n;i++)
    {   if(w==0)break;

        if(v[i].ss <= w)
        {
            tot += v[i].ff;
            w -= v[i].ss;
        }
        else
        {
            tot += w*(v[i].ff/v[i].ss);
            break;
        }
        //cout<<tot<<" "<<w<<endl;
        
    }

    cout<<fixed<<setprecision(4)<<tot;

    
}
