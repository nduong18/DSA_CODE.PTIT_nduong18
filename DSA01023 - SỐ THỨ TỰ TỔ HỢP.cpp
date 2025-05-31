#include <bits/stdc++.h>
using namespace std;

int n,k,a[1001],b[1001], final = 0;

void sinh(){
    int i = k;
    while (i >= 1 && a[i] == n-k+i) i--;
    if (i == 0) final = 1;
    else {
        a[i]++;
        for (int j = i+1; j <= k; j++) a[j] = a[j-1] + 1;
    }
}

bool check (){
    for (int i = 1; i <= k; i++) if (a[i] != b[i]) return false;
    return true;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while (t--){
        cin >> n >> k;
        for (int i = 1; i <= k; i++){
            cin >> b[i];
            a[i] = i;
        }
        int cnt = 1;
        while (!final){
            if (check()){
                cout << cnt << '\n';
                break;
            }
            sinh();
            cnt++;
        }


    }

    return 0;
}
