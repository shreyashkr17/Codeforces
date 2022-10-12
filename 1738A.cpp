#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void ans(){
    ll int n;
    cin>>n;

    vector<ll int> a(n);
    vector<ll int> b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    vector<ll int> fire,frost;

    for(int i=0;i<n;i++){
        if(a[i]==0){
            fire.push_back(b[i]);
        }else if(a[i]==1){
            frost.push_back(b[i]);
        }
    }

    sort(fire.begin(),fire.end());
    sort(frost.begin(),frost.end());

    ll int ans = 0;

    if(fire.size()!=frost.size()){
        if(frost.size()>fire.size()){
            ll int min_size = fire.size();
            for(int i=0;i<fire.size();i++){
                ans += 2*fire[i];
            }

            ll int cnt=0;
            for(int i=frost.size()-1;i>=0;i--){
                if(cnt<min_size){
                    ans += 2*frost[i];
                    cnt++;
                }else{
                    ans += frost[i];
                }
            }
        }else if(frost.size()<fire.size()){
            ll int min_size = frost.size();

            for(int i=0;i<frost.size();i++){
                ans +=2*frost[i];
            }

            ll int cnt=0;

            for(int j=fire.size()-1;j>=0;j--){
                if(cnt<min_size){
                    ans+=2*fire[j];
                    cnt++;
                }else{
                    ans += fire[j];
                }
            }
        }
    }else{
        for(int i=1;i<fire.size();i++){
            ans+=2*fire[i];
            ans+=2*frost[i];
        }

        ans+= (2*(max(fire[0],frost[0])) + min(fire[0],frost[0]));
    }

    cout<<ans<<endl;
}
int main(){
    ll int t;
    cin>>t;

    while(t--){
        ans();
    }
    return 0;
}