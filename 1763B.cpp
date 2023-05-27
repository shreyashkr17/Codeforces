#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k, baseHealth = 0;
    cin >> n >> k;

    vector<pair<ll, ll>> m(n);
    for (int i = 0; i < n; i++)
    {
        cin >> m[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> m[i].second;
    }

    sort(m.begin(), m.end());

    vector<ll> health(n);

    for (int i = 0; i < n; i++)
    {
        health[i] = m[i].first;
    }

    for (int i = 0; i < n - 1; i++)
    {
        m[i].second = min(m[i + 1].second, m[i].second);
    }

    while (k > 0)
    {
        ll dead = upper_bound(health.begin(), health.end(), k + baseHealth) - health.begin();
        if (dead == n)
        {
            cout << "YES" << endl;
            return;
        }
        baseHealth += k;
        k -= m[dead].second;
    }
    cout << "NO" << endl;
    return;
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