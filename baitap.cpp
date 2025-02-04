#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        set <int> se1,se2,se;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            se1.insert(x); se.insert(x);
        }
        for (int i = 0; i < m; i++){
            int x; cin >> x;
            se2.insert(x); se.insert(x);
        }
        for (auto it : se) cout << it << ' ';
        cout << "\n";
        for (auto it : se2){
            if (se1.find(it) != se1.end()){
                cout << it << ' ';
                se1.erase(it);
            }
        }
        cout << "\n";
    }
}
