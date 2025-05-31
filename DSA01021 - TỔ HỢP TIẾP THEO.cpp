#include <bits/stdc++.h>
using namespace std;

int n,k,a[100],b[100];
bool ok;

void sinh(){
    int i = k;
    while (a[i] == n-k+i) i--;
    if (i == 0) ok = true;
    else {
        a[i]++;
        for (int j = i+1; j <= k; j++) a[j] = a[j-1] + 1;
    }
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while (t--){
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        ok = false;

        cin >> n >> k;
        for (int i = 1; i <= k; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sinh();

        if (ok) cout << k << '\n';
        else {
            int cnt = 0;
            for (int i = 1; i <= k; i++)
                for (int j = 1; j <= k; j++)
                    if (a[i] == b[j]) cnt++;
            cout << k-cnt << '\n';
        }

        
    }
    return 0;
}
