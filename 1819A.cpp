#include <iostream>
// #include <bits/stdc++.h>
#include <map>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;
#define ll long long

int mexArr(vector<int> v)
{
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()));
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != i)
        {
            return i;
        }
    }

    return v.size();
}

bool solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> leftOccur, rightOccur;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        rightOccur[v[i]] = i;
        if (!leftOccur.count(v[i]))
        {
            leftOccur[v[i]] = i;
        }
    }

    int mex = mexArr(v);

    if (leftOccur.count(mex + 1))
    {
        int left = leftOccur[mex + 1], right = rightOccur[mex + 1];

        for (int i = left; i <= right; ++i)
        {
            v[i] = mex;
        }

        int mx = mexArr(v);
        assert(mx <= mex+1);
        return (mx == mex+1);
    }

    for (int i = 0; i < n; ++i)
    {
        assert(v[i] != mex);
        if (v[i] > mex || (leftOccur[v[i]] != rightOccur[v[i]]))
        {
            return true;
        }
    }

    return false;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cout<<(solve()?"Yes":"No")<<endl;
    }
    return 0;
}