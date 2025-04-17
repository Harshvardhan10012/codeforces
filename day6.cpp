#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    if(freq.size()>=3)
    cout<<"NO"<<endl;
    else{
        int h=freq.begin()->second;
        int p=freq.rbegin()->second;
        if(h==p)
        cout<<"YES"<<endl;
        else if
            (n%2==1 && abs(h-p)==1){
            cout<<"yes"<<endl;

        }
        else
        cout<<"NO"<<endl;
        
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