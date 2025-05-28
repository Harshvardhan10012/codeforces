#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int min_diff = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            min_diff = min(min_diff, v[j] - v[i]);  
        }
    }

    if (min_diff < 0)
        cout << 0 << "\n";
    else
        cout << (min_diff / 2) + 1 << "\n";
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
