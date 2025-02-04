#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        set <int> se;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            se.insert(x);
        }
        if (se.size() <= 1) cout << "-1\n";
        else{
            auto it = se.begin();
            cout << *it << ' ';
            it++;
            cout << *it << '\n';
        }
    }
}
