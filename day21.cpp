#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int flag = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (__gcd(a[i], a[j]) <= 2) {
                flag = 1;
                break; 
            }
        }
        if (flag == 1) break; 
    }

    if (flag == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    
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