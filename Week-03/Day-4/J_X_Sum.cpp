#include <bits/stdc++.h>
using namespace std;
const int N = 205;
int a[N][N];
bool vis[N][N];
int n, m;
int di[4] = {-1, -1, 1, 1};
int dj[4] = {-1, 1, -1, 1};
bool isValid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}
int bfs(int si, int sj)
{
    int sum = a[si][sj];
    vis[si][sj] = true;
    for (int k = 0; k < 4; k++)
    {
        int ci = si + di[k];
        int cj = sj + dj[k];
        for (int i = 0; i < 200; i++)
        {
            if (isValid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                sum += a[ci][cj];
                ci+=di[k];
                cj+=dj[k];
            }
            else
            {
                break;
            }
            
        }
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        int max_sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                memset(vis, false, sizeof(vis));
                max_sum = max(max_sum, bfs(i, j));
            }
        }
        cout << max_sum << endl;
    }
    return 0;
}