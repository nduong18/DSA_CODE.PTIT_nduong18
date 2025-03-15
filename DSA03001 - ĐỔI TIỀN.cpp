#include <bits/stdc++.h>
#define ll long long
#define mod 123456789
using namespace std;

//2250 = 2*1000 + 250
// 250 = 0*500 + 250
// 250 = 1*200 + 50
// 50 = 0*100 + 50
// 50 = 1*50 + 0

int tien[] = {1000,500,200,100,50,20,10,5,2,1};

int main() {
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int money = 0;
        int cnt = 0, idx = 0;
        while(n){
            cnt += n/tien[idx];
            n = n%tien[idx];
            idx++;
        }
        cout << cnt << endl;
    }
}
