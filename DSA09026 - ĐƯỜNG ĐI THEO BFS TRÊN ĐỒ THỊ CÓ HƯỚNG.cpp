#include <bits/stdc++.h>
using namespace std;

int n,m,u,v;
bool visited[1001];
vector<int> ke[1001];
bool check;
string res;

void BFS(int j){
    queue <pair<int,string>> q;
    q.push({j,to_string(j)});
    while (!q.empty()){
        pair<int,string> x = q.front();
        q.pop();
        for (int i : ke[x.first]){
            if (!visited[i]){
                if (i == v){
                    check = true;
                    res = x.second + " " + to_string(i);
                }
                q.push({i,x.second + " " + to_string(i)});
                visited[i] = true;
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
        check = false;
        res = "";

        cin >> n >> m >> u >> v;
        for (int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
        }

        BFS(u);

        if (!check) cout << "-1\n";
        else cout << res << '\n';
    }

}
