#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int k;
    cin>>k;
    if(k%2==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
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