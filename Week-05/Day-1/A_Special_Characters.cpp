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
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "A";
        }
        cout << endl;
    }
    return 0;
}