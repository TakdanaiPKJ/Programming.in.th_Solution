#include"bits/stdc++.h"
using namespace std;

bool chk[50];

int main(){

    int cnt=0;
    for(int i=0;i<10;i++){
        int n;
        cin >> n;
        if(chk[n%42]) continue;
        cnt++;
        chk[n%42] = true;
    }
    cout << cnt;

    return 0;
}
