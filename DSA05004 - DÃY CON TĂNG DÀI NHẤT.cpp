#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

int main() {
    int n; cin >> n;
    int a[n], f[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) f[i] = 1;

    for (int i = 0; i < n; i++){
        f[i] = 1;
        for (int j = 0; j < i; j++){
            if (a[j] < a[i]){
                f[i] = max(f[i],f[j]+1);         
            }
        }
    }
    cout << *max_element(f,f+n) << endl;
}
