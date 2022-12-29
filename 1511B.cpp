#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;

        string s1 = "1";
        for(int i=0;i<a-1;i++){
            s1+="0";
        }

        string s2="1";
        ll to=b-c+1;
        for(int i=0;i<to-1;i++){
            s2+="1";
        }

        for(int i=0;i<(c-1);i++){
            s2+="0";
        }

        cout<<s1<<" "<<s2<<endl;

    }
    return 0;
}