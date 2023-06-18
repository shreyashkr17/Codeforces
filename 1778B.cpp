#include <iostream>
using namespace std;
 
const int sz = 1e5+10;
int p[sz], a[sz], pos[sz];
 
int main()
{
    int t;
    scanf("%d", &t);
 
    while(t--) {
        int n, m, d;
        cin>>n>>m>>d;
 
        for(int i = 1; i <= n; i++) {
            cin>>p[i];
            pos[ p[i] ] = i;
        }
 
        for(int i = 1; i <= m; i++) {
            cin>>a[i];
        }
 
        int ans = 1e9;
 
        for(int i = 1; i < m; i++) {
            if(pos[a[i+1]] <= pos[a[i]] || pos[a[i+1]]-pos[a[i]] > d) {
                ans = 0;
                break;
            }
 
            ans = min(ans, pos[a[i+1]] - pos[a[i]]);
 
            int dist = pos[a[i+1]]-pos[a[i]];
 
            int swapNeed = d-dist+1;
            int swapPossible = (pos[a[i]]-1) + (n - pos[a[i+1]]);
            if(swapPossible >= swapNeed) ans = min(ans, swapNeed);
        }
 
        cout<<ans<<endl;
    }
 
    return 0;
}