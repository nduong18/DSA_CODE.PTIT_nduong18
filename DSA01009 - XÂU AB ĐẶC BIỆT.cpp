#include <bits/stdc++.h>
using namespace std;

int n,k,cnt;
vector<string> v;

bool check(string s){
    int cntA = 0;
    for (int i = 0; i <= s.size()-k; i++){
        if (s.substr(i,k) == string(k,'A')){
            if ((i > 0 && s[i-1] == 'A') || (i+k < s.size() && s[i+k] == 'A')) continue;
            cntA++;
        }
    }
    return cntA == 1;
}

void backtrack(string s){
    if (s.size() == n){
        if (check(s)) {
            v.push_back(s);
            cnt++;
        }
        return;
    }

    backtrack(s + 'A');
    backtrack(s + 'B');
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n >> k;
    backtrack("");
    cout << cnt << '\n';
    sort(v.begin(), v.end());
    for (auto i : v) cout << i << '\n';
    return 0;
}
