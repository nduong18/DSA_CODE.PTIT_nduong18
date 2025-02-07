#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GITHUB: nduong18

int main(){
   int t; cin >> t;
   while (t--){
        int n;
        cin >> n;
        int x[n];
        for (int i = 0; i < n; i++) cin >> x[i];
        if (next_permutation(x,x+n)){
            for (int i = 0; i < n; i++) cout << x[i] << ' ';
        }
        else{
            for (int i = 1; i <= n; i++) cout << i << ' ';
        }
        cout << endl;
   }
}

