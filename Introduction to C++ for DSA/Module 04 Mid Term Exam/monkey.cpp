#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    while (getline(cin, s))
    {
        string ans = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                ans += s[i];
            }
        }

        sort(ans.begin(), ans.end());

        cout << ans << endl;
    }

    return 0;
}