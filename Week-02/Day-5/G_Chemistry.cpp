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
        string s;
        cin >> s;
        int a[26] = {0};
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (a[i] % 2 == 1)
                cnt++;
        }
        if (cnt > k + 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}