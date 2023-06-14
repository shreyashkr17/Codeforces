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
        ll n;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        if (n % 2 == 1)
        {
            cout<<-1<<endl;
        }else{
            for(int i =0 ;i<n;i++){
                if(i%2){
                    cout<<i<<" ";
                }else{
                    cout<<n-i<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}