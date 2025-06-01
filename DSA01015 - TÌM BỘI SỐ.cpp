#include <bits/stdc++.h>
using namespace std;

int n;
vector <string> v;

void solve(){
    queue<string> q;
    q.push("0");
    q.push("9");
    while (!q.empty()){
        string x = q.front();
        q.pop();
        if (x.size() > 15) break;
        v.push_back(x);
        q.push(x + '0');
        q.push(x + '9');
    }
}


int main() {
    cin.tie(0) -> sync_with_stdio(0);

    solve();
    int t; cin >> t;
    while (t--){
        cin >> n;
        for (auto i : v){
            if (stoll(i) % n == 0 && stoll(i) > 10){
                cout << i << '\n';
                break;
            }
        }
    }
}
