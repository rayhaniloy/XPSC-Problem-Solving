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
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> v;
        v.push_back(a);

        for (int i = n; i >= 1; i--)
        {
            if (i != a && i != b)
            {
                v.push_back(i);
            }
        }
        v.push_back(b);
        bool ans = true;
        if (v.size() == n)
        {
            int min = *min_element(v.begin(), v.begin() + n / 2);
            int max = *max_element(v.begin() + n / 2, v.end());
            if (min != a || max != b)
            {
                ans = false;
            }
        }
        else
        {
            ans = false;
        }
        if (ans)
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}