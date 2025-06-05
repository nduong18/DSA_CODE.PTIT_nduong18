#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    int t; cin >> t; 
    while (t--){
        string s; cin >> s;
        stack <string> st;

        for (char c : s){
            if (c == '+' || c == '-' || c == '*' || c == '/'){
                string a = st.top(); st.pop();
                string b = st.top(); st.pop();
                string tmp = c + b + a;
                st.push(tmp);             
            }
            else {
                string num(1,c);
                st.push(num);
            }
        }
        cout << st.top() << '\n';
    }

}
