#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(string s){
    stack <int> st;
    st.push(-1);
    int maxL = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '(') st.push(i);
        else {
            st.pop();
            if (!st.empty()){
                maxL = max(maxL, i - st.top());
            } else {
                st.push(i);
            }
        }
    }
    return maxL;
}

int main(){
    int t; cin >> t;
    cin.ignore();
    string s;
    while (cin >> s) cout << solve(s) << '\n';
}
