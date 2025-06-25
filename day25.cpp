#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i ++)	cin >> a[i];
	for(int i = 1; i < n; i ++)
		if(abs(a[i - 1] - a[i]) <= 1){
			cout << 0 << endl;
			return ;
		}
	for(int i = 1; i < n - 1; i ++)
		if(a[i] > a[i - 1] && a[i] > a[i + 1] || a[i] < a[i - 1] && a[i] < a[i + 1]){
			cout << 1 << endl;
			return ;
		}
	cout << -1 << endl;
    
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