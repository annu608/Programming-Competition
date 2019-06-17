#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        set <ll,greater<ll>> s;
        for(ll i=0;i<n;i++)
        {
            ll data;
            cin>>data;
            s.insert(data);
        }
        auto i=s.begin();
        ll max1=*i;
        if(s.size()==1)
        {
            cout<<max1+max1<<endl;
            continue;
        }
        i++;
        ll max2=*i;
        if(s.size()==2)
        {
            cout<<max1+max2<<endl;
            continue;
        }
        i++;
        ll ans=*i;
        for(;i!=s.end();i++)
        {
            ans=__gcd(ans,*i);
        }
        cout<< max(__gcd(ans,max1)+max2,__gcd(ans,max2)+max1)<<endl;
        s.clear();
    }
}
