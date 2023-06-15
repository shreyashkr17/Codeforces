#include <iostream>
// #include <bits/stdc++.h>
#include <set>
#include <vector>
using namespace std;
#define ll long long

void solve()
{
    ll n, c, d;
    cin >>n>> c >> d;
    ll dupCost = 0;

    set<int> st;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (st.find(x) == st.end())
        {
            st.insert(x);
        }
        else
        {
            dupCost += c;
        }
    }

    ll ind = 0;
    vector<int> v(100005);
    for (auto x : st)
    {
        v[++ind] = x;
    }
    ll ans = 2e18;

    for (int i = 1; i <= ind; i++)
    {
        ans = min(ans, 1LL * (1LL*(v[i] - i) * d + 1LL*(ind - i) * c));
    }
    ans = min(ans, 1LL * ind * c + d);

    cout << (ans + dupCost) << endl;
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