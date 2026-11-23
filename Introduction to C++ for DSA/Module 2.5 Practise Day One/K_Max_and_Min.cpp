#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for(int i = 0 ; i< 3 ; i++)
    {
        cin >> a[i];
    }
    int mx = INT_MIN;
    int minimum = INT_MAX;
    for(int i = 0 ; i< 3; i++)  // same jinis tai ekta loop ei kora 
    {
        mx = max(mx,a[i]);
        minimum = min(minimum,a[i]);
    }
    cout << minimum << " " << mx;
    return 0;
}