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
    int min_val = INT_MAX;
    for (int i=0;i<n;i++) {
        min_val = min(min_val, abs(v[i]));
    }
    cout<<min_val<<endl;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif

    
        harsh();
    

    return 0;
}