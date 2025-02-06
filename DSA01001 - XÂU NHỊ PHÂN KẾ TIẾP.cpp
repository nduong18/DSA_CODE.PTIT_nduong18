#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GITHUB: nduong18

void sinh(int a[], int z){
    int i = z-1;
    while (i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if (i != 0) a[i] = 1;
    for (int i = 1; i < z; i++) cout << a[i];
}

int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        cin.ignore();
        int n = s.size();
        int a[1005]; a[0] = 0;
        int z = 1;
        for (char i : s){
            a[z++] = (i - '0');
        }
        sinh(a,z);
        cout << "\n";
    }
}
