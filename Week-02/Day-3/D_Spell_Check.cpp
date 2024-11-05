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
        vector<bool> v(5, false);
        bool ans = true;
        if (n != 5)
        {
            ans = false;
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                if (s[i] == 'T')
                    v[0] = true;
                else if (s[i] == 'i')
                    v[1] = true;
                else if (s[i] == 'm')
                    v[2] = true;
                else if (s[i] == 'u')
                    v[3] = true;
                else if (s[i] == 'r')
                    v[4] = true;
            }
            for (int i = 0; i < 5; i++)
            {
                if (v[i] == false)
                    ans = false;
            }
        }
        if (ans == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}