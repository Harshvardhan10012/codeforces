#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    
    v.insert(v.begin(), 0);
    v.push_back(x);

    int maxGap = 2*(v[v.size()-1]-v[v.size()-2]);
    for (int i = 1; i < v.size(); i++) {
        int gap = v[i] - v[i - 1];
        if (gap > maxGap) {
            maxGap = gap;
        }
    }

    cout << maxGap << endl;
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
