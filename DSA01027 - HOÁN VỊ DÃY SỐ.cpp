#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int X[100], a[100], n;

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1,a+n+1);
    for (int i = 1; i <= n; i++) cout << a[i] << ' ';
    cout << endl;
    while (next_permutation(a+1,a+n+1)){
        for (int i = 1; i <= n; i++) cout << a[i] << ' ';
        cout << endl;
    }
}
