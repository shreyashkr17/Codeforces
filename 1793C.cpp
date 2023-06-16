#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<int> v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        ll max = 1,min = n;
        ll left = 0,right = n-1;

        while( left <= right){
            if(v[left] == min){
                left++;
                min++;
            }else if(v[left] == max){
                left++;
                max--;
            }else if(v[right] == min){
                right--;
                min++;
            }else if(v[right] == max){
                right--;
                max--;
            }else{
                break;
            }
        }

        if(left <= right){
            cout<<left+1<<" "<<right+1<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}