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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int stock = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= k)
                stock += v[i];
            if (v[i] == 0 && stock > 0)
            {
                ans++;
                stock--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}