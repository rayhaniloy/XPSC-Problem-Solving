#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = n - 1, round = 0;
    int sereja = 0, dima = 0;
    while (i <= j)
    {
        if (round % 2 == 0)
        {
            if (a[i] > a[j])
            {
                sereja += a[i];
                i++;
            }
            else
            {
                sereja += a[j];
                j--;
            }
            round++;
        }
        else
        {
            if (a[i] > a[j])
            {
                dima += a[i];
                i++;
            }
            else
            {
                dima += a[j];
                j--;
            }
            round++;
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}