#include <iostream>
// #include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        string left,right;
        cin>>left>>right;

        string left_pad = "";

        for(int i =0;i<(right.size()-left.size());i++){
            left_pad+="0";
        }
        left_pad+=left;
        ll res = 0;
        ll diff_ind = 0;

        for(int  i =0;i<right.size();i++){
            if(left_pad[i] != right[i]){
                res+=(abs((right[i]-'0')-(left_pad[i]-'0')));
                diff_ind = i;
                break;
            }
        }

        // cout<<res<<" "<<"Left_pad: "<<left_pad<<" right:"<<right<<endl;
        if(res!=0){
          cout<<res+(right.size()-(diff_ind+1))*9<<endl;  
        }else{
            cout<<res<<endl;
        }
        
    }
    return 0;
}