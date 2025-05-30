#include <bits/stdc++.h>
using namespace std;

int n,m;
bool check[500][500];
int M[500][500];

int X[8] = {-1,-1,-1,0,0,1,1,1};
int Y[8] = {-1,0,1,-1,1,-1,0,1};

void DFS(int a, int b){
    check[a][b] = true;
    for (int i = 0; i < 8; i++){
        int x = a + X[i];
        int y = b + Y[i];
        if (x >= 0 && x < n && y >= 0 && y < m && !check[x][y] && M[x][y] == 1) DFS(x,y);
    }
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while (t--){
        memset(check,false,sizeof(check));
        memset(M,0,sizeof(M));
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) 
                cin >> M[i][j];

        int cnt = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) {
                if (!check[i][j] && M[i][j] == 1){
                    cnt++;
                    DFS(i,j);
                }
            }
        }        
        cout << cnt << '\n';
    }

}
