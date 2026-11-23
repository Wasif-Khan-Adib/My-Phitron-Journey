#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i< n ;i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i<n/2 ;i++) // i ke ordhek porjonto calailei hobe
    {
        swap(a[i],a[n-1-i]); // last index first index e jacche, like n = 5 , i = 0, so a[0]=a[4]
    }
    for(int i = 0; i<n ;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}