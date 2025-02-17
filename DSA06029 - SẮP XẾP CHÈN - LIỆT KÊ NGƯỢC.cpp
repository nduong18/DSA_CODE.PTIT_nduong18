#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    vector <vector<int>> v;

    for (int i = 1; i <= n; i++){
        sort(a,a+i);
        vector <int> z(a,a+i);
        v.push_back(z);
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << "Buoc " << i << ": ";
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    } 
}
