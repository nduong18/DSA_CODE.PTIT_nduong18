#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector <pair<int,int>> v(n);

        for (int i = 0; i < n; i++) cin >> v[i].first;
        for (int i = 0; i < n; i++) cin >> v[i].second;

        sort(v.begin(), v.end(),[](auto a, auto b){
            return a.second < b.second;
        });

        int cnt = 0, last_end = 0;
        for (auto i : v){
            if (i.first >= last_end){
                cnt++;
                last_end = i.second;
            }
        }

        cout << cnt << endl;
    }

}
