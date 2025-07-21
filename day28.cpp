#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
   
    int ans = 0, cnt = 0;
	for (int i = 0; i < n; ++i) {
		if (v[i] == 0) {
			++cnt;
			if (cnt == k) {
				++ans;
				cnt = -1;
			}
		} else {
			cnt = 0;
		}
	}
	
	cout << ans << '\n';
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