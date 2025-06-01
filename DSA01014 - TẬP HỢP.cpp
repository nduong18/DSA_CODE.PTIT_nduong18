#include <bits/stdc++.h>
using namespace std;

int n,k,s,cnt, x[1001];

void Try(int i, int start, int sum){
    if (i == k && sum == s){
        cnt++;
        return;
    }
    for (int j = start; j <= n; j++){
        if (sum + j > s) break;
        Try(i+1,j+1,sum + j);
    }
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    while (true){
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0) break;
        cnt = 0;
        Try(0,1,0);
        cout << cnt << '\n';
    }
}
