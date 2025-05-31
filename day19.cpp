#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int n;
    cin>>n;
    vector<int>v(n);
       vector<int>s;
    int k=n+1;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(n==1)
    cout<<1<<endl;
    else{
        for(int i=0;i<n;i++)
        {
            int x=k-v[i];
            s.push_back(x);
        }
    }
    for(int x:s)
    cout<<x<<" ";
    cout<<endl;
    
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