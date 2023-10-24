#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a,minn=INT_MAX,maxx=INT_MIN;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        minn = min(minn,a);
        maxx = max(maxx,a);
    }
    cout << minn << "\n" ;
    cout << maxx;

    return 0;
}
