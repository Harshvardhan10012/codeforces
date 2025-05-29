#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int x,k;
    cin>>x>>k;
    if((x%2==0&&k%2==1&&x%k!=0)||(x%2==1&&k%2==0))
    cout<<1<<endl<<x<<endl;
     else if(x%k!=0)
    cout<<1<<endl<<x<<endl;
    else if(x%2==0&&k%2==0)
    cout<<2<<endl<<x-(k+1)<<" "<<k+1<<endl;
    else
    {
        cout<<2<<endl<<x-(k-1)<<" "<<k-1<<endl;
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