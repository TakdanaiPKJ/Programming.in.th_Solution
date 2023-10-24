#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    int chk = 0;
    cin >> str;
    if(str[0]>='A'&&str[0]<='Z'){
        chk = 1;
    }
    for(int i=0;i<str.length();i++){
        if(chk==1&&str[i]>='A'&&str[i]<='Z') {
            continue;
        }
        else if(chk==0&&str[i]>='a'&&str[i]<='z'){
            continue;
        }
        else{
            cout << "Mix";
            return 0;
        }
    }
    if(chk){
        cout << "All Capital Letter";
    }else {
        cout << "All Small Letter";
    }

    return 0;
}
