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
    vector<int>p;
    p.push_back(v[0]);
    for(int i=1;i<n;i++)
    {
        if(v[i]>=v[i-1])
        {
            
            p.push_back(v[i]);
        }
        else 
        {
           
            p.push_back(v[i]);
            p.push_back(v[i]);

        }

    }
    int len=p.size();
    cout<<len<<endl;
    for(int x:p)
    {
        cout<<x<<" ";
    }
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