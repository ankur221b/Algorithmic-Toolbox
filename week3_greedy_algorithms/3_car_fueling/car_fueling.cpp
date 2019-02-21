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

int solve(int dist, int m, int n, int v[])
{   
    if(dist<=m)return 0;
    if(v[0]>m)return -1;
    
    int need = m, c=0, prev=-1 ;

    for(int i=0;i<n;i++)
    {
        if(v[i]>need)
        {
            if(i==0)return -1;
            
            need = v[i-1]+m;
            if(i!=n-1 && need<v[i])return -1;
            c++;
        }
        if(v[i]==need)
        {
            
            need = v[i]+m;
            prev = i;
            if(i!=n-1 && need<v[i+1])return -1;
            c++;
        }
        if(need>=dist)return c;
    }

    if(v[n-1]<need && dist>need)
    {
        c++;
        need = v[n-1]+m;
    }
    if(need<dist)return -1;

    return c;
    

}

int main() {

    int d,m,n;
    cin>>d>>m>>n;

    int v[n];

    for(int i=0;i<n;i++)cin>>v[i];

    cout<<solve(d,m,n,v);


}
