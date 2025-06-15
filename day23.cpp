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
    int x=*max_element(v.begin(),v.end());
    int y=*min_element(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(x==y)
        cout<<"NO\n";
        else 
        {
            cout<<"YES\n";
            if(v[i]==x)
            cout<<1<<" ";
            else cout<<2<<" ";
        }
        cout<<"\n";
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