#include <bits/stdc++.h>
using namespace std;

int n,m;
vector <int> ke[1001];
int degree[1001];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int t; cin >> t;
    while (t--){
        memset(degree,0,sizeof(degree));
        memset(ke,0,sizeof(ke));

        cin >> n >> m;
        for (int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
            degree[x]++;
            degree[y]++;
        }

        int odd_cnt = 0;
        for (int i = 1; i <= n; i++){
            if (degree[i] % 2 != 0) odd_cnt++;
        }

        if (odd_cnt == 0) cout << "2\n";
        else if (odd_cnt == 2) cout << "1\n";
        else cout << "0\n";

    }

    
    return 0;
}
