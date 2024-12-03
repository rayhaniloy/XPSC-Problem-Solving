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
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int pos = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                pos = i;
                break;
            }
        }
        if (!pos)
        {
            cout << "Yes" << endl;
        }
        else
        {
            bool flag = false;
            for (int i = pos + 1; i <= n; i++)
            {
                int j = (i % n) + 1;
                if (a[i] > a[j])
                {
                    flag = true;
                }
            }
            if (!flag)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}