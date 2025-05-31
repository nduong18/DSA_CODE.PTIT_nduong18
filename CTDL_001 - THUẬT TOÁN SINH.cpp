#include <bits/stdc++.h>
using namespace std;

int n;
vector <string> res;

bool check(string s){
    string tmp = s;
    reverse(s.begin(), s.end());
    return tmp == s;
}

void backtrack(string s){
    if (s.length() == n){
        if (check(s)) res.push_back(s);
        return;
    }
    backtrack(s + '0');
    backtrack(s + '1');
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n;
    backtrack("");
    for (auto &i : res){
        for (char c : i){
            cout << c << ' ';
        }
        cout << '\n';
    }


}
