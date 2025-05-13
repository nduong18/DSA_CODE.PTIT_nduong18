#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    queue <string> q;
    q.push("9");

    for (int i = 1;; i++){
        string curr = q.front();
        q.pop();

        long long x = stoll(curr);
        if (x % n == 0) {
            cout << curr << '\n';
            return;
        }

        string s1 = curr;
        string s2 = curr;

        q.push(s1.append("0"));
        q.push(s2.append("9"));
    }
}   

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        solve(n);
    }
}
