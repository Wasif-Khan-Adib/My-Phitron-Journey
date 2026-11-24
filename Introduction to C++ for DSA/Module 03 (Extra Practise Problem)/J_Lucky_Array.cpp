#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, a[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mini)
        {
            count++;
        }
    }

    count % 2 == 0 ? cout << "Unlucky" : cout << "Lucky";
    return 0;
}