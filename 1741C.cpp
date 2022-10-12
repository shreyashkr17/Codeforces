#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
    ll int t;
    cin>>t;

    while(t--){
        ll int n;
        cin>>n;

        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        vector<int> preSum(n+1);
        int sum=0;
        for(int i=1;i<n+1;i++){
            sum+=v[i-1];
            preSum[i]= sum;
        }

        vector<ll int> divisor;
        
        for(int i=1;i<n;i++){
            if(preSum[n]%preSum[i]==0){
                divisor.push_back(preSum[i]);
            }
        }

        vector<int> ans;
        for(int  i=0;i<divisor.size();i++){
            ll int l=1,r=1;
            ll sum2 = 0;

            ll dist = 0;

            while(l<n+1){
                sum2 = (preSum[r]-preSum[l-1]);

                if(sum2<divisor[i]){
                    r++;
                }

                if(sum2==divisor[i]){
                    sum2=0;
                    dist = max(dist,r-l+1);

                    l=r+1;
                    r++;
                }

                if(sum2>divisor[i]){
                    dist=n;
                    break;
                }
            }
            ans.push_back(dist);

        }

        sort(ans.begin(),ans.end());

        if(ans.size()==0){
            cout<<n<<endl;
        }else{
            cout<<ans[0]<<endl;
        }
    }
    return 0;
}