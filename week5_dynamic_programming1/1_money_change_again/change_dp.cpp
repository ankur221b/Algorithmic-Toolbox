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

int solve(int total,int coins[])
{
    if(total==0)return 0;
    
    int v[4][total+1];

    for(int i=0;i<=total;i++)v[0][i]=INT_MAX;
    for(int i=0;i<4;i++)v[i][0]=0;

    for(int i=1;i<4;i++)
    {
        for(int j=1;j<=total;j++)
        {
            if(j>=coins[i-1])
            {
                v[i][j] = min(v[i-1][j], v[i][j-coins[i-1]]+1);
            }
            else v[i][j] = v[i-1][j];
        }
    }
    /*
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=total;j++)cout<<v[i][j]<<" ";
        cout<<endl;
    }*/    

    return v[3][total];

}

int main() {

    int n;
    cin>>n;

    int coins[] = {1,3,4};

    cout<<solve(n,coins); 


return 0;

}
