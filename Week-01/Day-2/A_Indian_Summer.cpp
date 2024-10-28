#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<string, string>> v;
    for (int i = 0; i < n; i++)
    {
        string s, c;
        cin >> s >> c;
        v.push_back({s, c});
    }
    bool vis[n];
    memset(vis, false, sizeof(vis));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vis[i]=true;
            cnt++;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (!vis[j] && v[i].first == v[j].first)
            {
                if (v[i].second == v[j].second)
                {
                    vis[j] = true;
                }
                else
                {
                    vis[j] = true;
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;

    return 0;
}