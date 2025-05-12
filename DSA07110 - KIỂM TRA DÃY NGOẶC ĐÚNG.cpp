#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool solve(string s){
    stack <char> st;
    for (char c : s){
        if (st.empty()){
            if (c == '[' || c == '(' || c == '{') st.push(c);
        } else {
            if (c == '[' || c == '(' || c == '{') st.push(c);
            else {
                if (c == ']' && st.top() == '[') st.pop();
                else if (c == ')' && st.top() == '(') st.pop();
                else if (c == '}' && st.top() == '{') st.pop();
                else return false;
            }
        }
    }
    return st.empty();
}

int main(){
    int t; cin >> t;
    cin.ignore();
    string s;
    while (cin >> s) {
        if (solve(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}
