#include <bits/stdc++.h>
using namespace std;
#define int long long 
int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,b,m;
        cin>>n>>b>>m;
        int prev_block=-1,ans=0;
        for(int i=1;i<=m;i++)
        {
            int x;
            cin>>x;
            x=x+1;
            int curr_block=(x+b-1)/b;
            if(curr_block!=prev_block)
            {
                ans++;
                prev_block=curr_block;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
