#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int n, k;
vector <string> v;
string X[100];

void Try(int i, int pos){
    for (int j = pos; j < v.size(); j++){
        X[i] = v[j];
        if (i == k-1){
            for (int l = 0; l < k; l++) cout << X[l] << ' ';
            cout << endl;
        }
        else Try(i+1,j+1);
    }
}


int main(){
    set <string> se;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        se.insert(s);
    }
    v.assign(se.begin(),se.end());
    Try(0,0);
}
