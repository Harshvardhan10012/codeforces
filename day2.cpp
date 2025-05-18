#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>v_cp=v;
    sort(v_cp.begin(),v_cp.end());
    if(v_cp==v|| k>1)
    cout<<"yes\n";
    else cout<<"NO\n";

    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif

    int t;
    cin >> t;
    while (t--) {
        harsh();
    }

    return 0;
}