#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        cin.ignore();
        string s;
        getline(cin,s);

        set <int> se;
        for (char i : s){
            if (isdigit(i)) se.insert(i - '0');
        }

        for (auto i : se) cout << i << ' ';
        cout << "\n";
    }
}
