#include <bits/stdc++.h>
using namespace std;

void harsh() {
    int a,b,c;
    cin>>a>>b>>c;
   if(c%2==0)
   {
    if(a>b)
    cout<<"First"<<endl;
    else cout<<"Second"<<endl;
   }
   else
   {
    if(a+1>b)
    cout<<"First"<<endl;
    else
    cout<<"Second"<<endl;
   }

    
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