#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

bool find (int k,int a[], int n){
    for (int i = 0; i < n-2; i++){
        int l = i+1, r = n-1;
        while (l < r){
            int sum = a[i] + a[l] + a[r];
            if (sum == k) return true;
            if (sum > k) r--;
            else l++;
        }
    }
    return false;
}

int main() {
   int t; cin >> t;
   while (t--){
        int n,k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        if (find(k,a,n)) cout << "YES\n";
        else cout << "NO\n";
   }     
}
