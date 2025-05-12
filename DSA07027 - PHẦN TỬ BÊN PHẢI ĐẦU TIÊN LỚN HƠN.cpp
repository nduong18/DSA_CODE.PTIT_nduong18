#include <bits/stdc++.h>
using namespace std;

vector<int> solve(const vector<int> a, int n){
    stack <int> st;
    vector <int> result(n,-1);
    for (int i = n-1; i >= 0; i--){
        while (!st.empty() && st.top() <= a[i]){
            st.pop();
        }

        if (!st.empty()){
            result[i] = st.top();
        }

        st.push(a[i]);
    }
    
    return result;
}

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector <int> result = solve(a,n);
        for (int i = 0; i < n; i++){
            cout << result[i] << ' ';
        }
        cout << '\n';
    }
}
