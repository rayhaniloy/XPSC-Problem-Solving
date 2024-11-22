#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long ans=0,rem=b,idx=0;
        while(rem!=0 && idx<n)
        {
            ans++;
            if(rem==1)
            {
                rem=min(v[idx]+1,a);
                idx++;
            }
            rem--;
        }
        cout<<ans<<endl;
    }
    return 0;
}