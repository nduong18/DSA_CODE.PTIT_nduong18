#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GITHUB: nduong18

int n,k,s,x[200],cnt;

void Try(int i, int start, int sum){
    if (i == k){
        if (sum == s) cnt++;
        return;
    }
    for (int j = start; j <= n; j++){
        if (sum + j > s) break;
        x[i] = j;
        Try(i+1,j+1,sum+j);
    }
}


int main(){
    while(true){
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0) break;
        cnt = 0;
        Try(0,1,0);
        cout << cnt << endl;
    }
}

