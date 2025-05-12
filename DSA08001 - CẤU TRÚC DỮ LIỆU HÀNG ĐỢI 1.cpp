#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        queue <int> q;
        while (n--){
            int x; cin >> x;
            if (x == 1) cout << q.size() << '\n';
            else if (x == 2) {
                if (q.empty()) cout << "YES\n";
                else cout << "NO\n";
            } else if (x == 3) {
                int y; cin >> y;
                q.push(y);
            } else if (x == 4) {
                if (!q.empty()) q.pop();
            } else if (x == 5) {
                cout << (!q.empty() ? q.front() : -1) << '\n';
            } else if (x == 6) {
                cout << (!q.empty() ? q.back() : -1) << '\n';
            }
        }
    }
}
