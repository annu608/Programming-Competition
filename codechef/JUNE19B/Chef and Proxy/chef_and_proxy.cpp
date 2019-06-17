#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double d;
        cin>>d;
        string s;
        cin>>s;
        double p=count(s.begin(),s.end(),'P');
        double pp=p/d;
        int i=2;
        int ans=0;
        while(pp<0.75 && i<d-2)
        {
            if(s[i]=='A')
            {
                if((s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P'))
                {
                    p++;
                    ans++;
                    pp=p/d;
                }
            }
            i++;
        }
        if(pp>=0.75)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}
