#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string temp =s;
        string ans;
        reverse(temp.begin(),temp.end());
        if(is_sorted(s.begin(),s.end())){
            cout<<s<<endl;
        }else if(is_sorted(temp.begin(),temp.end())){
            cout<<0<<endl;
        }else{
            for(int i=0;i<s.size();i++){
                if(s[i]=='0'){
                    ans.push_back('0');
                    continue;
                }else{
                    break;
                }
            }
            ans.push_back('0');
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]=='1'){
                    ans.push_back('1');
                    continue;
                }else{
                    break;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}