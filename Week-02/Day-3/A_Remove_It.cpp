#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,x;
    cin>>n>>x;
    vector<long long>v;
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        if(a!=x)
        {
            v.push_back(a);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}