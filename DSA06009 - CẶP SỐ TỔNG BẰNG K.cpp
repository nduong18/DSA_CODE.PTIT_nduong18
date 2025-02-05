#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--){
        int n,k; cin >> n >> k;
        unordered_map <int,int> mp;
        int cnt = 0;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            if (mp.find(k-x) != mp.end()){
                cnt += mp[k-x];
            }
            mp[x]++;
        }
        cout << cnt << "\n";
    }
}
