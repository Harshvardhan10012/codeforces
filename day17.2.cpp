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
    int count=1;
    int ist=v[0];
    for(int i=1;i<n;i++)
    {
        if(ist+1<v[i])
        {
            ist=v[i];
            count++;
        }
    }
  
    cout<<count<<"\n";
   
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