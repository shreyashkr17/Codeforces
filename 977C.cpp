#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    int n, k;
	cin>>n>>k;
	
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
		cin>>v[i];
	
	sort(v.begin(), v.end());
	
	int ans;
	
	if (k == 0) {
		ans = v[0] - 1;
	} else {
		ans = v[k - 1];
	}
	
	int cnt = 0;
	
	for (int i = 0; i < n; ++i)
		if (v[i] <= ans) ++cnt;
	
	if (cnt != k || !(1 <= ans && ans <= 1e9)) {
		cout<<"-1"<<endl;
		return 0;
	}
	
	cout<<ans;
	
	return 0;
}