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
        for (int i = 0; i < n; i++)
        {
            for (char j = 'a'; j < 'a' + k; j++)
            {
                cout << j;
            }
        }
        cout << endl;
    }
    return 0;
}
