#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int val = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] != 0)
            {
                val = v[i];
            }
        }
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0 && v[i] != val)
            {
                ans = false;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}