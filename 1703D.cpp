#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        unordered_set<string> v(n);
        vector<string> s(n);

        for(int i=0;i<n;i++){
            cin>>s[i];
            v.insert(s[i]);
        }

        for(int i=0;i<n;i++){
            bool flag = true;
            if(s[i].length()==1){
                cout<<"0";
                continue;
            }
            for(int j=1;j<s[i].length();j++){
                string prefix = s[i].substr(0,j);
                string suffix = s[i].substr(j,s[i].length()-j);

                if(v.count(prefix) && v.count(suffix)){
                    cout<<"1";
                    flag = false;
                    break;
                }
            }

            if(flag){
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}   