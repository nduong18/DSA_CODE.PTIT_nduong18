#include <bits/stdc++.h>
#define ll long long
#define mod 123456789
using namespace std;

int change (int n, char p, char q){
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++){
        if (s[i] == p) s[i] = q;
    }
    return stoi(s);
}

int main() {
    int a,b; cin >> a >> b;
    cout << change(a,'6','5') + change(b,'6','5') << ' ';
    cout << change(a,'5','6') + change(b,'5','6') << endl;
}
