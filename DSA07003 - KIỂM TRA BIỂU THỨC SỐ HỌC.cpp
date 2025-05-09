#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    stack <char> st;

    for (char c : s){
        if (c == ')'){
            bool hasOperator = false;
            while (!st.empty() && st.top() != '('){
                char top = st.top();
                st.pop();
                if (top == '+' || top == '-' || top == '*' || top == '/'){
                    hasOperator = true;
                    st.pop();
                }
            }
            if (!st.empty()) st.pop();
            if (!hasOperator) return true;
        }
        else{
            st.push(c);
        }
    }
    return false;

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    
    int t; cin >> t;
    cin.ignore();

    while (t--){
        string s; getline(cin,s);
        cout << (check(s) ? "Yes\n" : "No\n");
    }

    return 0;
}
