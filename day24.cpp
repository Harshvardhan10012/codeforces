#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int a,x,y;
    cin>>a>>x>>y;
    if(a>x&&a<y)
    {
        cout<<"NO\n";
    }
    else if(a<x&&a>y)
    cout<<"NO\n";

    else 
    cout<<"YES\n";
    
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