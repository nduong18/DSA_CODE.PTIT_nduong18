#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int n, k, X[100], a[100], sum = 0, cnt = 0;
vector <vector<int>> v;

void Try(int i, int pos){
    for (int j = pos; j < n; j++){
        X[i] = a[j];
        sum += a[j];
        if (sum == k){
            cnt++;
            vector <int> z;
            for (int l = 0; l <= i; l++){
                z.push_back(X[l]);
            }
            v.push_back(z);
        }
        else Try(i+1,j+1);
        sum -= a[j];
    }
}

int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    Try(0,0);
    for (int i = v.size()-1; i >= 0; i--){
        for (int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
    cout << cnt << endl;
}
