#include <bits/stdc++.h>
using namespace std;

int n,m;
vector <int> ke[1001];
int ind[1001], outd[1001];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int t; cin >> t;
    while (t--){
        memset(ind,0,sizeof(ind));
        memset(outd,0,sizeof(outd));
        memset(ke,0,sizeof(ke));

        cin >> n >> m;
        for (int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
            outd[x]++;
            ind[y]++;
        }

        bool check = true;
        for (int i = 1; i <= n; i++){
            if (ind[i] != outd[i]){
                check = false;
                break;
            }
        }

        if (check) cout << "1\n";
        else cout << "0\n";

    }

    
    return 0;
}
