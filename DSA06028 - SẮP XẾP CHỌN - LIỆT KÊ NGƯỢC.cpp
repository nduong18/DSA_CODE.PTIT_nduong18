#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    vector <vector<int>> v;

    for (int i = 0; i < n-1; i++){
        int minIndex = i;
        for (int j = i+1; j < n; j++){
            if (a[j] < a[minIndex]) minIndex = j;
        }
            swap(a[minIndex],a[i]);
            vector <int> z(a,a+n);
            v.push_back(z);
    }

    for (int i = v.size()-1; i >= 0; i--){
        cout << "Buoc " << i+1 << ": ";
        for (int j = 0; j < n; j++){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}
