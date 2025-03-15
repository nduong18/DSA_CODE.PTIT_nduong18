#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

bool solve(int a[], int n){
    int l = 0, r = n-1;
    while (l <= r){
        if (a[l] > a[r]){
            swap(a[l],a[r]);
        }
        l++;
        r--;
    }
    for (int i = 0; i < n-1; i++){
        if (a[i+1] < a[i]) return false;
    }
    return true;
}

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        if (solve(a,n)) cout << "Yes\n";
        else cout << "No\n";
    }

}
