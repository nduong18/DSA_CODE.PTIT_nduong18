#include <bits/stdc++.h>
#define ll long long
using namespace std;

int prime[1000001];
void sang(){
    prime[0] = prime[1] = 0;
    for (int i = 2; i < 1000001; i++){
        prime[i] = 1;
    }
    for (int i = 2; i*i < 1000001; i++){
        if (prime[i]){
            for (int j = i*i; j < 1000001; j+=i){
                prime[j] = 0;
            }
        }
    }
}

int main()
{
    sang();
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        bool check = false;
        for (int i = 0; i <= n-i; i++){
            if (prime[i] && prime[n-i] && i+(n-i) == n){
                cout << i << ' ' << n-i << "\n";
                check = true;
                break;
            }
        }
        if (!check) cout << "-1\n";
    }
}
