#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll countChar(string s,string substr){
    ll count = 0;

    ll l = s.length();

    while(s.length()>0 && substr.length()){
        if(s.back() == substr.back()){
            substr.pop_back();
        }else{
            count++;
        }

        s.pop_back();
    }

    if(substr.length()==0){
        return count;
    }

    return l;
}

#define ll long long 
int main(){
    ll n;
    cin>>n;

    while(n--){
        string s;
        cin>>s;

        ll len = s.length();

        if(len<2){
            cout<<len<<endl;
        }else{
            cout<<min({countChar(s,"00"),countChar(s,"25"),countChar(s,"50"),countChar(s,"75")})<<endl;
        }
    }
    return 0;
}