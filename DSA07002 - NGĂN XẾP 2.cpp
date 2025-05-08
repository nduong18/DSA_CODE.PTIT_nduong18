#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    
    int t; cin >> t;
    cin.ignore();
    stack <int> st;
    string s;

    while (t--){
        cin >> s;
        if (s == "PUSH"){
            int x; cin >> x;
            st.push(x);
        }
        else if (s == "POP"){
            if (!st.empty()) st.pop();
        }
        else if (s == "PRINT"){
            if (st.empty()) cout << "NONE\n";
            else{
                cout << st.top() << '\n';
            }
        }
    }


    return 0;
}
