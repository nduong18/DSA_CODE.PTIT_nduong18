#include <bits/stdc++.h>
using namespace std;

int n,m;
bool visited[1001];
vector<int> ke[1001];

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << ' ';
        for (int i : ke[x]){
            if (!visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }
    cout << "\n";
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int t; cin >> t;
    while (t--){
        memset(ke,0,sizeof(ke));
        memset(visited,false,sizeof(visited));
        cin >> n >> m;
        int u; cin >> u;
        for (int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }

        BFS(u);
    }
}
