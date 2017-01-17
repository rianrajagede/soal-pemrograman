#include<iostream>
using namespace std;
int main(){
    string s; int t,i;
    cin >> s;
    t=0;
    for(i=0;i<s.length();i++){
        if(s[i]=='N'){
            t++;
        }
    }
    cout << t << endl;
    return 0;
}
