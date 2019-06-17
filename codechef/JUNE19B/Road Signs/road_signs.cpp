#include<bits/stdc++.h>
using namespace std;
long int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    long int temp = power(a,b/2);
    long int temp1 = (temp%1000000007*temp%1000000007)%1000000007;
    if(b%2==0)
    {
        return temp1;
    }
    else
    {
        return (temp1%1000000007*a%1000000007)%1000000007;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int k;
        cin>>k;
        cout<<(5%1000000007*(power(2,k))%1000000007)%1000000007<<endl;
    }
}
