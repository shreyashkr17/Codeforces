#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll int n1,n2;
    cin>>n1;

    vector<int> boys(n1);

    for(int i=0;i<n1;i++){
        cin>>boys[i];
    }

    cin>>n2;
    vector<int> girls(n2);

    for(int i=0;i<n2;i++){
        cin>>girls[i];
    }


    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end());

    ll int count=0;

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(girls[j])
            if(abs(boys[i]-girls[j])<=1){
                girls[j]=200;
                count++;
                break;
            }
        }
    }

    cout<<count<<endl;
    return 0;
}