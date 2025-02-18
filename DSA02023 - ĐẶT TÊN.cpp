#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

string a[100], X[100];
set <string> se;
int n,k, idx = 0;

void in(){
    for (int i = 1; i <= k; i++) cout << X[i] << ' ';
    cout << endl;
}

void Try(int i, int pos){
    for (int j = pos; j < idx; j++){
        X[i] = a[j];
        if (i == k) in();
        else Try(i+1,j+1);
    }
}   

int main(){
   cin >> n >> k;
   for (int i = 0; i < n; i++) {
        string s; cin >> s;
        se.insert(s);
   }
   for (auto it : se) a[idx++] = it;
   Try(1,0);
}
