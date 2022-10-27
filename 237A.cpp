#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    int t;
    cin>>t;

    int arr[2460]={0};
    for(int i=0;i<t;i++){
        int h,m;
        cin>>h>>m;

        int x = ((h*100)+m);
        arr[x]++;
    }

    cout<<*max_element(arr,arr+2460)<<endl;
    return 0;
}   