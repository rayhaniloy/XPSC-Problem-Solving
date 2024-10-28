#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, r;
    cin >> l >> r;
    if (r - l >= 0)
    {
        cout << r - l + 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}