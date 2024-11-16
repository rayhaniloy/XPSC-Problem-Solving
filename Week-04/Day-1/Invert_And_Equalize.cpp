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
        string s;
        cin >> s;
        int ans = 0;
        if (s[0] == '1')
        {
            for (int i = 1; i < n; i++)
            {
                if (s[i] == '0' && s[i - 1] == '1')
                    ans++;
            }
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (s[i] == '1' && s[i - 1] == '0')
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}