#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    cin.ignore();
    
    string s;
    
    while (t--){
        cin >> s;
        stack <int> st;
        
        for (int i = s.size()-1; i >= 0; i--){
            char c = s[i];
            if (isdigit(c)){
                st.push(c - '0');
            }
            else{
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();

                switch(c){
                    case '+': st.push(a+b); break;
                    case '-': st.push(a-b); break;
                    case '*': st.push(a*b); break;
                    case '/': st.push(a/b); break;
                }
            }
        }
        
        cout << st.top() << '\n';
    }
}
