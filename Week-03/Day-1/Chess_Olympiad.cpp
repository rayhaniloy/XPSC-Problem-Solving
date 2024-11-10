#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w,d,l;
    cin>>w>>d>>l;
    float teamA=4-l-d*0.5;
    float teamB=l+d*0.5;
    if(teamA>teamB)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}