#include<bits/stdc++.h>
using namespace std;

int arr[101][101];

int main(){

    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int tmp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> tmp;
            arr[i][j]+=tmp;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
