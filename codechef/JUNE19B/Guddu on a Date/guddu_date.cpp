#include<bits/stdc++.h>
using namespace std;
long long int digit_sum(long long int n)
{
    long long int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int ds=digit_sum(n);
        if(ds%10==0)
        {
            cout<<n<<"0"<<endl;
        }
        else
        {
            cout<<n<<(10-ds%10)<<endl;
        }
    }
}
