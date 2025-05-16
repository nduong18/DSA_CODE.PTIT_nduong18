#include <bits/stdc++.h>
using namespace std;

int n,m;
int cnt = 0;
vector<int> ke[1001];
bool visited[1001];

void DFS(int u){
    visited[u] = true;
    for (int i : ke[u]){
        if (!visited[i]){
            DFS(i);
        }
    }
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while (t--){
        memset(ke,0,sizeof(ke));
        cin >> n >> m;
        for (int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
        }

        bool check = true;
        for (int i = 1; i <= n; i++){
            DFS(i);         
            for (int j = i+1; j < n; j++){
                if (!visited[j]){
                    check = false;
                    break;
                }
            }
            memset(visited,false,sizeof(visited));
        }

        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    
}
