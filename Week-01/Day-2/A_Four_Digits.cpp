#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int var = n;
    stack<int>st;
    vector<int> v;
    while (true)
    {
        if (var == 0)
            break;
        st.push(var % 10);
        var /= 10;
    }
    while(!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    for (int i = 0; i < (4 - v.size()); i++)
    {
        cout << '0';
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }

    return 0;
}