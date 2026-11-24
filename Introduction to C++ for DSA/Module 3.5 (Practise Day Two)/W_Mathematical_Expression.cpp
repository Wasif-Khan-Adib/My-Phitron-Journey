#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s,e;
    cin >> a >> s >> b >> e >> c ;
    int ans;
    if(s == '+')
    {
        ans = a + b;
    }
    else if ( s == '-')
    {
        ans = a-b;
    }
    else if ( s == '*')
    {
        ans = a*b;
    }
    
    if(ans == c)
    {
        cout << "Yes";
    }
    else if ( ans != c)
    {
        cout << ans;
    }
    return 0;
}