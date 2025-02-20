#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

void prev_binary(string &s){
    int i = s.size()-1;
    while (i >= 0 && s[i] == '0'){
        s[i] = '1';
        i--;
    }
    if (i >= 0) s[i] = '0';
}

int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        prev_binary(s);
        cout << s << endl;
    }
}
