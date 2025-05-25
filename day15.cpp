#include <bits/stdc++.h>
using namespace std;

void harsh()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int best=1;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(v[i]%2==v[j]%2)
            best=max(best,j-i+1);
        }
    }
    cout<<n-best<<endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        harsh();
    }

    return 0;
}