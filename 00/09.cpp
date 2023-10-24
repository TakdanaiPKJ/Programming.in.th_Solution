#include"bits/stdc++.h"
using namespace std;

int arr[4];
char al[4];

int main(){

    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    sort(arr,arr+3);
    cin >> al[0];
    cin >> al[1];
    cin >> al[2];

    cout << arr[al[0]-'A'] << " ";
    cout << arr[al[1]-'A']<< " ";
    cout << arr[al[2]-'A']<< " ";

    return 0;
}
