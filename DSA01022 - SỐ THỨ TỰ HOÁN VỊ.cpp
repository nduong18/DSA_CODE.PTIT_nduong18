#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector <int> a(n);
        vector <int> base(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
            base[i] = i+1;
        }

        int cnt = 1;
        do {
            if (base == a){
                cout << cnt << '\n';
                break;
            }
            else cnt++;
        } while (next_permutation(base.begin(), base.end()));
    }

    return 0;
}
