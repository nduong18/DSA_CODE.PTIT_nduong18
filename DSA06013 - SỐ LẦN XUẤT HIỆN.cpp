#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--){
        int n,k; cin >> n >> k;
        map <int,int> mp;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        if (mp[k] == 0){
            cout << "-1\n";
        }
        else{
            cout << mp[k] << "\n";
        }
    }
}
