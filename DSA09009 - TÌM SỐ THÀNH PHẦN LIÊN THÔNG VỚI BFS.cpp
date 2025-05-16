#include <bits/stdc++.h>
using namespace std;

int n,m;
bool visited[1001];
vector<int> ke[1001];
int cnt = 0;

void BFS(int u){
    queue<int> q;
    q.push(u);
    while (!q.empty()){
        int x = q.front();
        q.pop();
        for (int i : ke[x]){
            if (!visited[i]){
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int t; cin >> t;
    while (t--){
        memset(visited,false,sizeof(visited));      
        memset(ke,0,sizeof(ke));
        cnt = 0;

        cin >> n >> m;
        for (int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }

        for (int i = 1; i <= n; i++){
            if (!visited[i]){
                cnt++;
                BFS(i);            
            }
        }

        cout << cnt << '\n';

    }

}
