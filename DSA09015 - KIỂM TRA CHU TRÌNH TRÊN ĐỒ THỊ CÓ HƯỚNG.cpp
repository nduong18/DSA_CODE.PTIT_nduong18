#include <bits/stdc++.h>
using namespace std;

int n,m;
vector <int> ke[1001];
int state[1001];

bool DFS(int u){
    state[u] = 1;
    for (int i : ke[u]){
        if (state[i] == 0){
            if (DFS(i)) return true;
        } 
        else if (state[i] == 1) return true;
    }
    state[u] = 2;
    return false;
}


int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int t; cin >> t;
    while (t--){
        memset(ke,0,sizeof(ke));
        memset(state,0,sizeof(state));

        cin >> n >> m;
        for (int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
        }

        bool check = false;
        for (int i = 1; i <= n; i++){
            if (state[i] == 0){
                if (DFS(i)) {
                    check = true;
                    break;
                }
            }
        }

       if (check) cout << "YES\n";
       else cout << "NO\n";

    }

    
    return 0;
}
