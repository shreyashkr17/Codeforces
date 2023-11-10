#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    int s,m;
    cin>>m>>s;

    string maxi,mini;
    if(s == 0){
        if(m == 1){
            cout<<"0 0"<<endl;
            return 0;
        }else{
            cout<<"-1 -1"<<endl;
            return 0;
        }
    }

    for(int i =0;i<m;i++){
        int x = min(9,s);
        // cout<<x<<endl;
        maxi.push_back('0'+x);
        // cout<<maxi<<endl;
        s-=x;
    }
    if(s>0){
        cout<<"-1 -1"<<endl;
        return 0;
    }

    mini = maxi;
    reverse(mini.begin(),mini.end());

    int j = 0;
    while(mini[j] == '0'){
        j++;
    }
    mini[j]--;
    mini[0]++;

    cout<<mini<<" "<<maxi<<endl;
    return 0;
}