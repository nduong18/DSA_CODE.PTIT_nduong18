#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

int kadane(int a[], int n){
    int maxSum = a[0], currentSum = a[0];
    for (int i = 1; i < n; i++){
        currentSum = max(a[i], currentSum + a[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << kadane(a,n) << endl;
    }
}
