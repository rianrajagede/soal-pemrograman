#include<iostream>
using namespace std;

string s,z,ss;

int main(){
    cin>>s;
    cin>>z;
    cin>>ss;

    for(int i=0;i<ss.length();i++){
        if(ss[i]=='1'){
            cout<<z[i];
        }else{
            cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}
/*
10
1 1 1 1 1 1 1 1 1 1
1 . . 1 1 . . 1 1 1
1 . . 1 1 1 . . 1 1
1 . . 1 1 1 . . 1 1
1 . . 1 1 1 . . 1 1
1 . . 1 1 . . . . 1
1 . . . . . . 1 . 1
1 . . . . . . 1 . 1
1 1 1 1 . 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
*/
