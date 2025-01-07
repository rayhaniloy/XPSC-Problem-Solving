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
        long long sum = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            if (v[i] == 1)
                cnt++;
        }

        if (sum >= cnt + n && n > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}