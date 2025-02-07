#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GITHUB: nduong18

int n, a[100], final = 0;

void ktao(){
    for (int i = 1; i <= n; i++) a[i] = i;
}

void sinh(){
   int i = n-1;
   while (a[i] > a[i+1] && i >= 1){
        i--;
   }
   if (i == 0) final = 1;
   else{
        int j = n;
        while (a[i] > a[j]) j--;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
   }
}

int main(){
   int t; cin >> t;
   while (t--){
        cin >> n;
        ktao();
        int x[n];
        for (int i = 1; i <= n; i++) cin >> x[i];
        
        int cnt = 0;
        while (final == 0){
            cnt++;
            bool check = true;
            for (int i = 1; i <= n; i++){
                if (x[i] != a[i]){
                    check = false;
                    break;
                }
            }
            if (check){
                cout << cnt << endl;
                break;
            }
            sinh();
        }
        final = 0;
   }
}

