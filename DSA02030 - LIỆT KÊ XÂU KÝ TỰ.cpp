#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int X[100], k;
char N;

void Try(int i, char start){
    for (int j = start; j <= N; j++){
        X[i] = j;
        if (i == k){
            for (int t = 1; t <= k; t++) cout << (char)X[t];
            cout << endl;
        }
        else Try(i+1,j);  
    }
}

int main(){
    cin >> N >> k;
    Try(1,'A');
}
