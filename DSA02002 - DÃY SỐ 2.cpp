#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while (t--){
        vector<string> v;
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        string z = "[";
        for (int i = 0; i < n; i++) {
            z += to_string(a[i]);
            if (i != n-1) z += " ";
        }      
        z += "]";


        int i = n-1;
        while (i > 0){
            string tmp = "[";
            for (int j = 0; j <= i-1; j++){
                a[j] = a[j] + a[j+1];
                tmp += to_string(a[j]);
                if (j != i-1) tmp += " ";
            }
            tmp += "]";
            v.push_back(tmp);
            i--;
        }
        
        for (int i = v.size()-1; i >= 0; i--) cout << v[i] << ' ';
        cout << z << '\n';
    }
    
    
}
