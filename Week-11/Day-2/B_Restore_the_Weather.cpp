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
        vector<pair<int, int>> v(n);
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(v.begin(), v.end());
        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++)
        {
            b[v[i].second] = a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}