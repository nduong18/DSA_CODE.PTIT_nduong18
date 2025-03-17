#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

int dp[1000001];

int main() {
    int t; cin >> t;
    int coin[10] = {1,2,5,10,20,50,100,200,500,1000};
    dp[0] = 0;
    for (int i = 1; i < 1000001; i++){
        dp[i] = 1e9;
        for (int j = 0; j < 10; j++){
            if (i >= coin[j]){
                dp[i] = min(dp[i], dp[i - coin[j]]+1);
            }
        }
    }
    while(t--){
        int n; cin >> n;
        cout << dp[n] << endl;
    }
}
