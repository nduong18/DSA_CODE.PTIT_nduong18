#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GITHUB: nduong18

int main(){
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        vector <pair<int,int>> v;
        for (int i = 0; i < n; i++){
            int y; cin >> y;
            v.push_back({y,abs(x-y)});
        }
        stable_sort(v.begin(),v.end(),[](auto a, auto b){return a.second < b.second;});
        for (auto it : v) cout << it.first << ' ';
        cout << "\n";
    }
}
