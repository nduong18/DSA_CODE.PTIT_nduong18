#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> res;

void backtrack(int sum, int last){
    if (sum == n){
        cout << '(';
        for (int i = 0; i < res.size(); i++){
            cout << res[i];
            if (i != res.size()-1) cout << ' ';
        }
        cout << ") ";
        return;
    }

    for (int i = last; i >= 1; i--){
        if (sum + i <= n){
            res.push_back(i);
            backtrack(sum + i, i);
            res.pop_back();
        }
    }
}


int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while (t--){
        cin >> n;
        backtrack(0,n);
        cout << '\n';
        res.clear();
    }
}
