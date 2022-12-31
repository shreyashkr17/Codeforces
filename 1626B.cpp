#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.length();
        // string s1 = "";

        bool flag = false;
        for (int i = n - 2; i >= 0; i--)
        {
            int x = (s[i] - '0') + (s[i + 1] - '0');
            if (x / 10 != 0)
            {
                int y = x / 10;
                x = x % 10;
                string temp = s.substr(0, i);
                temp += (y + '0');
                temp += (x + '0');
                temp += s.substr(i + 2);
                cout << temp << endl;
                flag = true;
                break;
            }
        }
        if (flag)
        {
            continue;
        }
        else
        {
            int x = (s[0] - '0') + (s[1] - '0');
            string ans(1, x + '0');
            // cout<<"Ans is:"<<ans<<endl;
            ans += s.substr(2);
            cout << ans << endl;
        }
    }
    return 0;
}