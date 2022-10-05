#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long 
#define mod 1000000007
#define float long double 

int32_t main()
{
    IOS;
    float t;
    cin>>t;
    while(t--)
    {
        float n,total=0;
        cin>>n;
        while(n--)
        {
            float p,q,d;
            cin>>p>>q>>d;
            float op = d*p/100;
            float np = (op+p)*d/100;
            float loose = abs(op-np);
            total += q*loose;
        }
        cout<<fixed<<setprecision(9)<<total<<"\n";
    }
    return 0;
}
