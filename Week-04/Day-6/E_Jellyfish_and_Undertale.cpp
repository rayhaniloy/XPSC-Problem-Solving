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
        long long a, b, n;
        cin >> a >> b >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += min(a - 1, v[i]);
        }
        cout << ans + b << endl;
    }
    return 0;
}