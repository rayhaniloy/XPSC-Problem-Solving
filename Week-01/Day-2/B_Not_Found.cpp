#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int a[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i] - 'a']++;
    }
    int ans = -1;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] == 0)
        {
            ans = i;
            break;
        }
    }
    if (ans == -1)
    {
        cout << "None" << endl;
    }
    else
    {
        cout << char(ans + 'a') << endl;
    }
    return 0;
}