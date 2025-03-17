#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

int f[1001][1001];

int main() {
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.size();
        memset(f,0,sizeof(f));
        int ans = 1;
        for (int i = 0; i < n; i++) f[i][i] = 1;

        for (int len = 2; len <= n; len++){
            for (int i = 0; i <= n-len; i++){
                int j = i+len-1;
                if (s[i] == s[j]){
                    if (len == 2) f[i][j] = 1;
                    else f[i][j] = f[i+1][j-1];
                    if (f[i][j]) ans = max(ans,len);
                }
            }
        }
        cout << ans << endl;

    }
}
