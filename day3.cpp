#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool cont_3_dot=false;
    int count_dot=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2 < n && s[i+2]=='.')
        {
            cont_3_dot=true;
            break;
        }
        if(s[i]=='.')
        {
            count_dot++;
        }
    }
    if(cont_3_dot)
    cout<<2<<endl;
    else 
    cout<<count_dot<<endl;
    
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