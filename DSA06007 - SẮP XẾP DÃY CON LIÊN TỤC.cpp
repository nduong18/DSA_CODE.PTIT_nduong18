#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

void findXY (int a[], int n){
    int x = -1, y = -1;

    for (int i = 0; i < n-1; i++){
        if (a[i+1] < a[i]){
            x = i;
            break;
        }
    }

    if (x == -1){
        cout << "0 0\n";
        return;
    }

    for (int i = n-1; i > 0; i--){
        if (a[i-1] > a[i]){
            y = i;
            break;
        }
    }

    int minValue = *min_element(a+x,a+y+1);
    int maxValue = *max_element(a+x,a+y+1);
    
    for (int i = 0; i < x; i++){
        if (a[i] > minValue){
            x = i;
            break;
        }
    }

    for (int i = n-1; i > y; i--){
        if (a[i] < maxValue){
            y = i;
        }
    }
    
    cout << x+1 << ' ' << y+1 << endl;

}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        findXY(a,n);
    }
}
