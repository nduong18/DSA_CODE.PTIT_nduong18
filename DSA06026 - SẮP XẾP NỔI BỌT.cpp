#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

void bubbleSort(int a[], int n){
    int z = 1;
    for (int i = 0; i < n; i++){
        bool check = false;
        for (int j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]) {
                swap(a[j],a[j+1]);
                check = true;
            }
        }
        if(check){
            cout << "Buoc " << z++ << ": ";
            for (int j = 0; j < n; j++) cout << a[j] << ' ';
            cout << endl;
        } 
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    bubbleSort(a,n);

}
