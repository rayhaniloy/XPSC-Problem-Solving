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
        int a[26];
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            a[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (a[i] % 2 == 1)
                cnt++;
        }
        if ((n - k) % 2 == 0)
        {
            if (cnt == k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (cnt - 1 == k || cnt == k)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}