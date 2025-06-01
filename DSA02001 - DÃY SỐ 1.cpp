#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << "[";
        for (int i = 0; i < n; i++) {
            cout << a[i];
            if (i != n-1) cout << ' ';
        }      
        cout << "]\n";
        int i = n-1;
        while (i > 0){
            cout << "[";
            for (int j = 0; j <= i-1; j++){
                a[j] = a[j] + a[j+1];
                cout << a[j];
                if (j != i-1) cout << ' ';
            }
            cout << "]\n";
            i--;
        }
    }
    
    
}
