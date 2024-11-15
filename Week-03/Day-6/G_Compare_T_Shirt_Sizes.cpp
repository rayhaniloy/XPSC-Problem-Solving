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
        string a, b;
        cin >> a >> b;
        int n = a.size() - 1, m = b.size() - 1;
        if (a[n] == b[m])
        {
            if (a.size() == b.size())
            {
                cout << "=" << endl;
            }
            else if (a.size() > b.size())
            {
                if (a[n] == 'L')
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            else
            {
                if (a[n] == 'L')
                {
                    cout << "<" << endl;
                }
                else
                {
                    cout << ">" << endl;
                }
            }
        }
        else if (a[n] == 'L')
        {
            cout << ">" << endl;
        }
        else if (a[n] == 'M' && b[m] == 'S')
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "<" << endl;
        }
    }
    return 0;
}