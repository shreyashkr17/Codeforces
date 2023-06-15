#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INT_MAX 2147483647

void solve()
{
}

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        ll max, min = INT_MAX;
        ll cnt = 0;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            cnt = 0, max = 0;
            for (ll i = 0; i < n; i++)
            {
                if (s[i] != ch)
                {
                    cnt++;

                    if (cnt > max)
                    {
                        max = cnt;
                    }
                }
                else
                {
                    cnt = 0;
                }
            }

            if (min > max)
            {
                min = max;
            }
        }

        if (min == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cnt = 0;
            while (min != 1)
            {
                min /= 2;
                cnt++;
            }
            cout << cnt + min << endl;
        }
    }
    return 0;
}