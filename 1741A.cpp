#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll int n;
    cin>>n;

    while(n--){
        string s1,s2;
        cin>>s1>>s2;

        ll int cnt1X=0,cnt2X=0;

        if(s1.back() == s2.back()){
            if(s1.back()=='S' && s2.back()=='S'){
                for(int i=0;i<s1.length();i++){
                    if(s1[i]=='X'){
                        cnt1X++;
                    }
                }
                for(int i=0;i<s2.length();i++){
                    if(s2[i]=='X'){
                        cnt2X++;
                    }
                }

                if(cnt1X>cnt2X){
                    cout<<"<"<<endl;
                }else if(cnt1X<cnt2X){
                    cout<<">"<<endl;
                }else{
                    cout<<"="<<endl;
                }
            }else if(s1.back()=='L' && s2.back()=='L'){
                for(int i=0;i<s1.length();i++){
                    if(s1[i]=='X'){
                        cnt1X++;
                    }
                }
                for(int i=0;i<s2.length();i++){
                    if(s2[i]=='X'){
                        cnt2X++;
                    }
                }

                if(cnt1X>cnt2X){
                    cout<<">"<<endl;
                }else if(cnt1X<cnt2X){
                    cout<<"<"<<endl;
                }else{
                    cout<<"="<<endl;
                }
            }else if(s1.back()=='M' && s2.back()=='M'){
                cout<<"="<<endl;
            }
        }else{
            if(s1.back()=='L' && s2.back()=='M'){
                cout<<">"<<endl;
            }else if(s1.back()=='M' && s2.back()=='L'){
                cout<<"<"<<endl;
            }else if(s1.back() == 'S' && s2.back() == 'M'){
                cout<<"<"<<endl;
            }else if(s1.back()=='M'  && s2.back() == 'S'){
                cout<<">"<<endl;
            }else if(s1.back()=='L' && s2.back()=='S'){
                cout<<">"<<endl;
            }else if(s1.back()=='S' && s2.back() == 'L'){
                cout<<"<"<<endl;
            }
        }
    }
    return 0;
}