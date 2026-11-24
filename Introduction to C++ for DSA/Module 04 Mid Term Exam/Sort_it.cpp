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

    sort(a, a + n); //soto to boro
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
    
    cout << "\n";

    sort(a, a + n, greater<int>()); //boro to soto
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
    return 0;
}

// 01