#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll combinatorics(ll n){
    if(n<2){
        return 0;
    }else{
        return (n*(n-1))/2;
    }
}
int main(){
    ll n,m;
    cin>>n>>m;

    ll min_pair_first = (m-n%m)*(combinatorics(n/m));
    ll min_pair_second = (n%m)*(combinatorics(n/m + 1));

    ll max_pair = combinatorics(n-m+1);
    cout<<min_pair_first+min_pair_second<<" "<<max_pair<<endl;
    return 0;
}