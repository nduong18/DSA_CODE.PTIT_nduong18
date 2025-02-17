#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int main(){
    int t; cin >> t;
    while (t--){

    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    vector <vector<int>> v;

    for (int i = 0; i < n; i++){
        bool check = false;
        for (int j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                check = true;
            }
        }
        if (check){
            vector <int> z(a,a+n);
            v.push_back(z);
        }
    }

    for (int i = v.size()-1; i >= 0; i--){
        cout << "Buoc " << i+1 << ": ";
        for (int j = 0; j < n; j++){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }

    }
}
