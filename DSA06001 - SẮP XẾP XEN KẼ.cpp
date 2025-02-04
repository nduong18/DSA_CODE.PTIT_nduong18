#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n ; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        int x = 0, y = n-1;
        while (x <= y)
        {
            if (x == y) cout << a[y--] << ' ';
            else cout << a[y--] << ' ' << a[x++] << ' ';
        }
        cout << "\n";
    }
}
