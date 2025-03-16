#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

int binarySearch (int a[], int n, int k){
    int l = 0, r = n-1, ans = -1;
    while(l <= r){
        int mid = l+(r-l)/2;
        if (a[mid] == k) return mid;
        else if (a[mid] > k) r = mid - 1;
        else l = mid+1;
    }
    return ans;
}

int main() {
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int z = binarySearch(a,n,k);
        if (z == -1) cout << "NO\n";
        else cout << z+1 << endl;
    }
}
