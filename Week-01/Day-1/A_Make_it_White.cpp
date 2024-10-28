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
       
        int found = 0, start = 0, end = 0;
        
        for (int i = 0; i < n; i++)
        {
            if (found == 0 && s[i] == 'B')
            {
                start = i;
                end = i;
                found = 1;
            }
            else if (s[i] == 'B')
            {
                end = i;
            }
        }
        
        cout << (end - start + 1) << endl;

    }
    return 0;
}