#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map <int,int> mp;
        int maxFre = 0;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
            if (mp[x] > maxFre) maxFre = mp[x];
        }
        
        bool check = true;
        for (auto it : mp){
            if (it.second == maxFre && it.second > n/2) {
                cout << it.first << endl;
                check = false;
                break;
            }
        }

        if (check) cout << "NO\n";

    }
}
