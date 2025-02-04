#include <bits/stdc++.h>
#define ll long long
using namespace std;

int bs (const vector<int> v, int n, int x){
    int l = 0, r = n-1;
    while (l <= r){
        int m = (l+r)/2;
        if (v[m] == x){
            return m;
        }
        else if (v[m] < x){
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    return -1;
}

int main()
{
    int t; cin >> t;
    while (t--){
        int n, x; cin >> n >> x;
        int tmp = 0;
        vector <int> v1,v2;
        bool check = false;
        for (int i = 0; i < n; i++){
            int z; cin >> z;
            if (tmp > z) check = true;

            if (check){
                v2.push_back(z);
            }
            else{
                v1.push_back(z);
            }
            tmp = z;
        }
        int i1 = bs(v1,v1.size(),x), i2 = bs(v2,v2.size(),x);
        if (i1 != -1) cout << i1+1 << "\n";
        else cout << i2+v1.size()+1 << "\n";
    }
}
