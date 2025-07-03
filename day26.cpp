#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) 
        cin >> x;
    sort(a.begin(), a.end());
    
    int cnt = 1, ans = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] - a[i - 1] <= k) {
            ++cnt;
        } else {
            cnt = 1;
        }
        ans = max(ans, cnt);
    }
    cout << n-ans << '\n';
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
