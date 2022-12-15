#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    string s;
    cin>>s;

    if(s[0]!='9' && s[0]>'4'){
        s[0] = '0'+('9'-s[0]);
    }

    for(int i=1;i<s.size();i++){
        if(s[i]>'4'){
            s[i] = '0'+('9'-s[i]);
        }
    }

    cout<<s<<endl;
    return 0;
}