#include <bits/stdc++.h>
using namespace std;

int pre(char c){
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return 0; 
}

void solve(string s){
    stack <char> st;
    string res = "";
    for (char x : s){
        if (x == '(') st.push(x);
        else if (isalpha(x)) res += x;
        else if (x == ')'){
            while (st.top() != '('){
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while (!st.empty() && pre(st.top()) >= pre(x)){
                res += st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    while (!st.empty()){
        res += st.top();
        st.pop();
    }
    cout << res << '\n';
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    int t; cin >> t; 
    while (t--){
        string s; cin >> s;
        solve(s);
    }

}
