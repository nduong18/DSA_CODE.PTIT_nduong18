#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int cnt = 1;
    for (int i = 0; i < n; i++){
        bool check = false;
        int minIndex = i;
        for (int j = i+1; j < n; j++){
            if (a[j] < a[minIndex]) minIndex = j;
            check = true;
        }
        if (check) {
            swap(a[minIndex],a[i]);
            cout << "Buoc " << cnt++ << ": ";
            for (int i : a) cout << i << ' ';
            cout << endl;
        }
    }
}
