#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int main() {
   int t; cin >> t;
   while (t--){
        int n; cin >> n;
        int a[n];
        map <int,int> mp;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        bool check = false;
        for (int i = 0; i < n; i++){
            if (mp[a[i]] > 1){
                cout << a[i] << endl;
                check = true;
                break;
            }
        }
        if (!check) cout << "NO\n";
   }
}
