#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll Xa,Xb,Xc;
        ll Ya,Yb,Yc;

        cin>>Xa>>Ya>>Xb>>Yb>>Xc>>Yc;
        ll distA = abs(Xb-Xa)+abs(Yb-Ya);
        ll distB = abs(Xc-Xa)+abs(Yc-Ya);

        ll distC = abs(Xb-Xc)+abs(Yc-Yb);

        cout<< ((distA+distB-distC)/2)+1<<endl;
    }
    return 0;
}