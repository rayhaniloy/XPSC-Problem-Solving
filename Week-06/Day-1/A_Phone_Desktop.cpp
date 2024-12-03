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
        int x, y;
        cin >> x >> y;
        int a = (y + 1) / 2;
        x -= 15 * a - 4 * y;
        x = max(x, 0);
        a += (x + 14) / 15;
        cout << a << endl;
    }
    return 0;
}