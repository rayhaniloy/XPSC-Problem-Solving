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
        string a, b;
        cin >> a >> b;
        int r1 = 0, r2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'G')
                a[i]='B';
            if (b[i] == 'G')
                b[i]='B';
        }
        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}