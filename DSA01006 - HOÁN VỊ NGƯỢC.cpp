#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GITHUB: nduong18

int n, a[100];

void ktao(){
    for (int i = 1; i <= n; i++) a[i] = i;
}

int main(){
   int t; cin >> t;
   while (t--){ 
   cin >> n;
   ktao();
   vector <vector<int>> v;
   do{
        vector <int> x (a+1,a+n+1);
        v.push_back(x);
   } while (next_permutation(a+1,a+n+1));

   reverse(v.begin(),v.end());

   for (int i = 0; i < v.size(); i++){
        for (auto it : v[i]){
            cout << it;
        }
        cout << ' ';
   }
   cout << endl;
 }
}

