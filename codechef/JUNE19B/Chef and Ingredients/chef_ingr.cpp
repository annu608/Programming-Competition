#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
using namespace std;
ll mod_inverse(int a,ll m)
{
    if(m==0)
    {
        return 1;
    }
    ll t=mod_inverse(a,m/2);
    if(m%2==0)
    {
        return (t%mod*t%mod)%mod;
    }
    else
    {
        return ((t%mod*t%mod)%mod*2)%mod;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int ans=0;
        long long int d=k-n;
        if(d<0)
        {
            cout<<(0+k%mod-1)%mod<<endl;
        }
        else
        {
            ll t1=d/(n-1)+1;
            ll t2=(t1%mod*mod_inverse(2,mod-2))%mod;
            //cout<<t2<<endl;
            ll t3 = (d%mod+(d%(n-1))%mod)%mod;
            //cout<<t3<<endl;
            ll t4=(t3%mod*t2%mod)%mod;
            //cout<<t4;
            ll ans = (t4+k%mod-1)%mod;
            cout<<ans<<endl;
        }
    }
}
