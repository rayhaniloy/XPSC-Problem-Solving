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
        if (n <= 1)
        {
            cout << "Ramos" << endl;
            continue;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt++;
            }
        }
        int m = n - cnt;
        if (min(cnt, m) % 2 != 0)

            cout << "Zlatan" << endl;

        else
            cout << "Ramos" << endl;
    }
    return 0;
}