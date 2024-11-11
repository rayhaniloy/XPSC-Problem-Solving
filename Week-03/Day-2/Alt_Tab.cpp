#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    stack<string> st;
    while (n--)
    {
        string s;
        cin >> s;
        st.push(s);
    }
    set<string> final;
    while (!st.empty())
    {
        string s = st.top();
        if (final.find(s) == final.end())
        {
            cout << s[s.size() - 2] << s[s.size() - 1];
        }
        final.insert(s);
        st.pop();
    }
    return 0;
}