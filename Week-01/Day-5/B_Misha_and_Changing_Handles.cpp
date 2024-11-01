#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, string> final;
    map<string, string> secondary;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        if (secondary.find(a) != secondary.end())
        {
            string s = secondary[a];
            final[s] = b;
            secondary.erase(a);
            secondary[b] = s;
        }
        else
        {
            final[a] = b;
            secondary[b] = a;
        }
    }
    cout << final.size() << endl;
    for (auto [x, y] : final)
    {
        cout << x << " " << y << endl;
    }
    return 0;
}