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
    int even=0;
    int odd=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]%2==v[i+1]%2)
        odd++;
        
    }

    cout<<odd<<endl;
    



    
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