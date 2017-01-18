#include<iostream>
using namespace std;

string s,z,ss;
int n;

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        bool flag=true;
        for(int j=0;j<s.length();j++){
            if(s[j]>60)flag=false;
        }
        if(!flag){
            for(int j=0;j<s.length();j++){
                if(s[j]=='8'){
                    s.replace(j,1,"eight");
                }
            }
        }
        cout<<s<<endl;
    }
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
