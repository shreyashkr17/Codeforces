#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    vector<ll> tind, mind;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
        {
            tind.push_back(i);
        }
        else if (s[i] == 'M')
        {
            mind.push_back(i);
        }
    }

    if (tind.size() != 2 * mind.size())
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        for (int i = 0; i < mind.size(); i++)
        {
            if (mind[i] < tind[i] || mind[i] > tind[i + mind.size()])
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                continue;
            }
        }

        cout << "YES" << endl;
    }
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}