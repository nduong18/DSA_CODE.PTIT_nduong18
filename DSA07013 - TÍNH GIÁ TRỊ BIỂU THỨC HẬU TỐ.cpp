#include <bits/stdc++.h>
using namespace std;
//DSA07013 - TÍNH GIÁ TRỊ BIỂU THỨC HẬU TỐ
int main(){
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    cin.ignore();
    
    string s;
    
    while (t--){
        cin >> s;
        stack <int> st;
        
        for (char c : s){
            if (isdigit(c)){
                st.push(c - '0');
            }
            else{
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
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
