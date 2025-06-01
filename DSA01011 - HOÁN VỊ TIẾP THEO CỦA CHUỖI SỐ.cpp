#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while (t--){
        int z; cin >> z;
        string s; cin >> s;
        cout << z << ' ';
        if (next_permutation(s.begin(), s.end())) cout << s << '\n';
        else cout << "BIGGEST\n";
    }
}
