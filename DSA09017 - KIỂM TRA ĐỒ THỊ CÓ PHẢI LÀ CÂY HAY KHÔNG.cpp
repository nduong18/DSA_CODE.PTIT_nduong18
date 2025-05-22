#include <bits/stdc++.h>
using namespace std;

int n;
vector <int> ke[1001];
bool visited[1001];

//LT
void DFS1(int u){
    visited[u] = true;
    for (int i : ke[u]){
        if (!visited[i]){
            DFS1(i);
        }
    }
}

//CT
bool DFS2(int u, int parent){
    visited[u] = true;
    for (int i : ke[u]){
        if (!visited[i]){
            if (DFS2(i,u)) return true;
        }
        else if (i != parent) return true;
    }
    return false;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int t; cin >> t;
    while (t--){
        memset(ke,0,sizeof(ke));
        memset(visited,0,sizeof(visited));

        cin >> n;
        int m = n-1;
        for (int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }

        bool lt = true;
        DFS1(1);
        for (int i = 1; i <= n; i++){
            if (!visited[i]) {
                lt = false;
                break;
            }
        }

        memset(visited,false,sizeof(visited));

        bool ct = false;
        for (int i = 1; i <= n; i++){
            if (!visited[i]){
                if (DFS2(i,-1)){
                    ct = true;
                    break;
                }
            }
        }

        if (lt && !ct) cout << "YES\n";
        else cout << "NO\n";

    }

    
    return 0;
}
