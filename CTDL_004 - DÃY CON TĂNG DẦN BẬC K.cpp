#include <bits/stdc++.h>
using namespace std;

int n,k,cnt, a[1001];
vector <int> tmp;

void backtrack (int pos){
    if (tmp.size() == k){
        bool ok = true;
        for (int i = 1; i < k; i++){
            if (tmp[i] < tmp[i-1]){
                ok = false;
                break;
            }
        }
        if (ok) cnt++;
        return;
    }

    for (int i = pos; i < n; i++){
        tmp.push_back(a[i]);
        backtrack(i+1);
        tmp.pop_back();
    }
}



int main() {
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    backtrack(0);
    cout << cnt << '\n';
    return 0;
}
