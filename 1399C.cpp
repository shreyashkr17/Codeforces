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

        vector<int> v(n);
        vector<int> count(n+1);
        for(int i=0;i<n;i++){
            cin>>v[i];
            count[v[i]]++;
        }

        int res=0;

        for(int sum=2;sum<=2*n;sum++){
            int curr_sum=0;
            for(int i=1;i<(sum+1)/2;i++){
                if(sum-i>n)
                    continue;
                curr_sum+=min(count[i],count[sum-i]);
            }
            if(sum%2==0){
                curr_sum+=count[sum/2]/2;
            }
            res = max(res,curr_sum);
        }
        cout<<res<<endl;

    }
    return 0;
}