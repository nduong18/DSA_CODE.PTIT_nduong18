#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        int MIN = INT_MAX;
        for (int i = 0; i < n-1; i++){
            MIN = min(MIN,a[i+1]-a[i]);
        }
        cout << MIN << endl;
    }
}
