#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        map <int,int> mp;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        vector <pair<int,int>> v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](auto a, auto b){
             if (a.second != b.second) return a.second > b.second;
             return a.first < b.first;
             });
        for (auto it : v){
            if (it.second > 1){
                for (int i = 0; i < it.second; i++){
                    cout << it.first << ' ';
                }
            }
            else{
                cout << it.first << ' ';
            }
        }
        cout << "\n";
    }
}
