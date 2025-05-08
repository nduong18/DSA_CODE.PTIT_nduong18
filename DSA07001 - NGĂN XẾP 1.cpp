#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    
    stack <int> st;
    string s;

    while (cin >> s){
        if (s == "push"){
            int x; cin >> x;
            st.push(x);
        }
        else if (s == "pop"){
            if (!st.empty()) st.pop();
        } 
        else if (s == "show"){
            if (st.empty()) cout << "empty\n";
            else
            {
                stack <int> tmp;

                while (!st.empty()){
                    tmp.push(st.top());
                    st.pop();
                }

                while (!tmp.empty()){
                    cout << tmp.top() << ' ';
                    st.push(tmp.top());
                    tmp.pop();
                }

                cout << "\n";
            }
        }
    }
    return 0;
}
