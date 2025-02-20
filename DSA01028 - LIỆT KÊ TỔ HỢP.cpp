#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int n, k;
int X[100], used[100];
vector <int> v;
set <int> se;

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
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    v.assign(se.begin(),se.end());
    Try(0,0);
}
