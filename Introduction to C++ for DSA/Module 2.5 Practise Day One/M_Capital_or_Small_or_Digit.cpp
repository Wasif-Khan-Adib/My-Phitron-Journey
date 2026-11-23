#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c <= '9' && c >= '0')
    {
        cout << "IS DIGIT\n";
    }
    else if (c >= 'A' && c <= 'Z')
    {
        cout << "ALPHA\n";
        cout << "IS CAPITAL\n";
    }
    else if (c >= 'a' && c <= 'z')
    {
        cout << "ALPHA\n";
        cout << "IS SMALL\n";
    }
    return 0;
}