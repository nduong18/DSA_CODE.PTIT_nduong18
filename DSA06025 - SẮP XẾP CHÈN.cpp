#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

void insertionSort(int a[], int n){
    cout << "Buoc 0: " << a[0] << endl;
    for (int i = 1; i < n; i++){
        int pos = i-1, x = a[i];
        while (pos >= 0 && a[pos] > x){
            a[pos+1] = a[pos];
            --pos;
        }
        a[pos+1] = x;
        
        cout << "Buoc " << i << ": ";
        for (int j = 0; j <= i; j++) cout << a[j] << ' ';
        cout << endl;
    }
    
}

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    insertionSort(a,n);

}
