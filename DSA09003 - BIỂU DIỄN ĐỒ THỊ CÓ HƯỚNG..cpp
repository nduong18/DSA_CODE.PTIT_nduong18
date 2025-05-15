#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    
    int t; cin >> t;
    while (t--){
       int v,e; cin >> v >> e;
       vector <int> a[1001];
       memset(a,0,sizeof(a));
       
       for (int i = 1; i <= e; i++){
            int x, y; cin >> x >> y;
            a[x].push_back(y);
       }

       for (int i = 1; i <= v; i++){
            cout << i << ": ";
            for (auto it : a[i]){
                cout << it << ' ';
            }
            cout << '\n';
       }
    }

}

