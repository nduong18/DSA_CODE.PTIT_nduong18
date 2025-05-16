#include <bits/stdc++.h>
using namespace std;

bool visited[1001];
vector <int> ke[1001];

void DFS(int u){
    visited[u] = true;
    for (int v : ke[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int t; cin >> t;
    while (t--){
        memset(ke,0,sizeof(ke));
        memset(visited,false,sizeof(visited));

        int v,e; cin >> v >> e;
        for (int i = 0; i < e; i++){
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }

        int cnt = 0;
        for (int i = 1; i <= v; i++){
            if (!visited[i]){
                DFS(i);
                cnt++;
            }
        }

        cout << cnt << '\n';

    }

}

