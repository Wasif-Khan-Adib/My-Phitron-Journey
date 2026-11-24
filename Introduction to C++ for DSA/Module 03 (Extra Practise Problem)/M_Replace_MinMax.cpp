
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

    int min = INT_MAX;
    int min_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            min_index = i;
        }
    }

    int max = INT_MIN;
    int max_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_index = i;
        }
    }

    swap(a[min_index], a[max_index]);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
