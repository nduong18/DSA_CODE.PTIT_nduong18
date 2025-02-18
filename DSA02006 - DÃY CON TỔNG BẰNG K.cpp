#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int X[105], a[105], n,k, found = 0, sum = 0;

void Try(int i, int pos){
    for (int j = pos; j <= n; j++){
        X[i] = a[j];
        sum += a[j];
        if (sum == k){
            found = 1;
            cout << "[";
            for (int l = 1; l <= i; l++){
                cout << X[l];
                if (l != i) cout << ' ';
            }
            cout << "] ";
        }
        else Try(i+1,j+1);
        sum -= a[j];
    }
}


int main(){
    int t; cin >> t;
    while (t--){
        cin >> n >> k;
        for (int i = 1; i <= n; i++) cin >> a[i];
        sum = 0;
        found = 0;
        sort(a+1,a+n+1);
        Try(1,1);
        if (!found) cout << "-1";
        cout << endl;
    }
}
