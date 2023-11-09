#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        vector<pair<char,int>> vec;

        for(int i=0;i<s.length();i++){
            if(vec.empty()){
                vec.push_back(make_pair(s[i],1));
            }else{
                if(vec.back().first==s[i]){
                    vec.back().second++;
                }else{
                    vec.push_back(make_pair(s[i],1));
                }
            }
        }

        int res = INT_MAX;

        for(int i =1;i<vec.size()-1;i++){
            if(vec[i-1].first != vec[i+1].first){
                res = min(res,vec[i].second+2);
            }
        }

        if(res == INT_MAX){
            cout<<0<<endl;
        }else{
            cout<<res<<endl;
        }
        
    }
    return 0;
}