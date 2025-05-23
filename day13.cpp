#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if (v[0] == v[n - 1]) {
        cout << -1 << endl;
        return;
    }

    
    int splitIndex = 1;
    while (splitIndex < n && v[splitIndex] == v[0]) {
        splitIndex++;
    }

    vector<int> b(v.begin(), v.begin() + splitIndex);
    vector<int> c(v.begin() + splitIndex, v.end());

    cout << b.size() << " " << c.size() << endl;
    for (int x : b) cout << x << " ";
    cout << endl;
    for (int x : c) cout << x << " ";
    cout << endl;


    
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