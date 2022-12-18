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
        ll k,n;
        cin >> k >> n;
        ll ansVal = 0;
        ll idx = 0;
        while (idx < k)
        {
            ll val1 = k - idx;
            ll calc = ((val1 * (val1 + 1))/ 2);
            if ((ansVal + calc)<= n)
            {
                break;
            }
            ansVal++;
            cout << ansVal << " ";
            idx++;
        }
        ll tx = 1;
        if (idx == 0)
        {
            cout << "1"<< " ";
            idx++;
            ansVal++;
        }
        while (idx < k)
        {
            ansVal = ansVal + tx;
            cout << ansVal << " ";
            ;
            tx++;
            idx++;
        }
        cout << "\n";
    }
    return 0;
}