#include <bits/stdc++.h>
using namespace std;

void harsh() {
    long long n,k;
    cin>>n>>k;
    if(n%2==0||(n-k)%2==0)
    {
        cout<<"Yes\n";
    }
    else cout<<"N0\n";
    
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