#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;

        ll x,y,x1,y1,x2,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;

        ll total_x = x-(a-b);
        ll total_y = y-(c-d);

        // cout<<total_x<<" "<<total_y<<endl;

        if(total_x>=x1 && total_x<=x2 && total_y>=y1 && total_y<=y2 && (x2>x1 || a+b==0) && (y2>y1 || c+d==0)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}