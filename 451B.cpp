#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vector<int> temp = v;

    sort(temp.begin(),temp.end());

    ll cnt = 0;

    for(int i=0;i<n;i++){
        if(temp[i] == v[i]){
            cnt++;
        }
    }

    if(cnt == n){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }

    ll i =0,l,r,segment = 0;
    while(i<n-1 && segment<1){
        if(v[i]<v[i+1]){
            i++;
        }else{
            l = i;
            r = i;

            while(v[i]>v[i+1] && i<n-1){
                i++;
                r++;
            }

            sort(v.begin()+l,v.begin()+r+1);
            segment++;
        }
    }

    for(int i=0;i<n;i++){
        if(v[i]!=temp[i]){
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1<<endl;
    return 0;
}