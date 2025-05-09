#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int cnt = 0;
        while (s.length()){
            int x = s.find("()");
            if (x == -1){
                if (s[0] == ')'){
                    s[0] = '(';
                    cnt++;
                }
                if (s[s.length()-1] == '('){
                    s[s.length()-1] = ')';
                    cnt++;
                }
            }
            else s.erase(x, 2);
        }
        cout << cnt << "\n";
    }

}
