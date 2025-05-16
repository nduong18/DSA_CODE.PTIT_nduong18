#include <bits/stdc++.h>
using namespace std;

int n,m,u,v;
bool visited[1001];
vector<int> ke[1001];
bool check;
string res;

void DFS(int j, string s){
    visited[j] = true;
    for (int i : ke[j]){
        if (!visited[i]){
            if (i == v){
                check = true;
                res = s + " " + to_string(i);
            }
            DFS(i,s + " " + to_string(i));
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
            ke[y].push_back(x);
        }

        DFS(u,to_string(u));

        if (!check) cout << "-1\n";
        else cout << res << '\n';
    }

}
