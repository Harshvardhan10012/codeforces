#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int zero = 0;
    int one = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0)
            zero++;
        else
            one++;
    }

    if (zero == n || one == n) {
        cout << "Yes" << endl;
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        if (v[i] == 0 && v[i + 1] == 0) {
            cout << "Yes" << endl;
            return;
        }
    }

    cout << "No" << endl;
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
