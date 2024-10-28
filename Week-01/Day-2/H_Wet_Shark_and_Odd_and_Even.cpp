#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    priority_queue<long long int> evenPQ;
    priority_queue<long long int> oddPQ;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        if (x % 2 == 0)
        {
            evenPQ.push(x);
        }
        else
        {
            oddPQ.push(x);
        }
    }
    long long int evenSum = 0;
    long long int oddSum = 0;
    long long int oddlast = 0;
    while (!evenPQ.empty())
    {
        evenSum += evenPQ.top();
        evenPQ.pop();
    }
    while (!oddPQ.empty())
    {
        oddSum += oddPQ.top();
        oddlast = oddPQ.top();
        oddPQ.pop();
    }
    if (oddSum % 2 == 1)
    {
        cout << (evenSum + oddSum - oddlast) << endl;
    }
    else
    {
        cout << (evenSum + oddSum) << endl;
    }
    return 0;
}