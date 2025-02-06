#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(string s){
    string tmp = s;
    reverse(s.begin(),s.end());
    return tmp == s;
}

int n, a[100], final = 0;

void ktao(){
    for (int i = 1; i <= n; i++) a[i] = 0;
}

void sinh(){
    int i = n;
    while (i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if (i == 0) final = 1;
    else a[i] = 1;
}

int main()
{
   ktao();
   cin >> n;
   while (final == 0){

        string tmp = "";
        for (int i = 1; i <= n; i++){
            tmp += (a[i] + '0');
        }
        if (check(tmp)){
            for (int i = 1; i <= n; i++){
            cout << a[i] << ' ';
            }
            cout << "\n";
        }   
        sinh();
   }
}
    
