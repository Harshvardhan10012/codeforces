#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int sum= 0;
    for(int x:v)
    {
        sum=sum+x;
    }
    if(sum%2==0)
    cout<<"Yes\n";
    else{
        cout<<"No\n";
    }
    
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