#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GITHUB: nduong18

void sinh(int n, int k, int a[]){
    int i = k;
    while (i >= 1 && a[i] == n-k+i){
        i--;
    }
    if (i == 0){
        for (int j = 1; j <= k; j++) cout << j << ' ';
    }
    else{
        a[i]++;
        for (int j = i+1; j <= k; j++) a[j] = a[j-1]+1;
        for (int j = 1; j <= k; j++) cout << a[j] << ' ';
    }
}

int main(){
    int t; cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for (int i = 1; i <= k; i++) cin >> a[i];
        sinh(n,k,a);
        cout << endl;
    }
}
