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
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());
        long long c1 = v[n - 1] - v[2], c2 = v[n - 3] - v[0], c3 = v[n - 2] - v[1];
        if (c1 <= c2 && c1 <= c3)
            cout << c1 << endl;
        else if (c2 <= c1 && c2 <= c3)
            cout << c2 << endl;
        else
            cout << c3 << endl;
    }
    return 0;
}