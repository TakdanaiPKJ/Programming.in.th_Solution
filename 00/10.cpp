#include"bits/stdc++.h"
using namespace std;

int arr[4];

int main(){

    arr[0] = 1;
    string a;
    cin >> a;
    //swap(arr[0],arr[1]);
    //cout << arr[1];
    for(int i=0;i<a.length();i++){
        if(a[i]=='A') swap(arr[0],arr[1]);
        else if(a[i]=='B') swap(arr[1],arr[2]);
        else if(a[i]=='C') swap(arr[0],arr[2]);
    }
    for(int i=0;i<3;i++){
        if(arr[i]) cout << i+1;
    }

    return 0;
}
