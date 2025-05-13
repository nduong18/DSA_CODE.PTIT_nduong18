#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    queue <string> q;
    q.push("1");

    for (int i = 1; i <= n; i++){
        string curr = q.front();
        q.pop();
        cout << curr << ' ';

        string s1 = curr;
        string s2 = curr;

        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
    cout << '\n';
}   

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        solve(n);
    }
}
