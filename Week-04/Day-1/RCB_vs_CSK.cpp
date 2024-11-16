#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    if (n - m >= 18)
        cout << "RCB" << endl;
    else
        cout << "CSK" << endl;
    return 0;
}