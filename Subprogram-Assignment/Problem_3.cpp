/*
    PROBLEM #3
    If you run the program, the function check(s) will return false value
    (it represents with 0 integer in command window) find the appropiate
    value of S that make it will return true value.
    And please explain, why does it work?
*/

#include<iostream>
using namespace std;

bool check(string s){
    int i;
    char x = s[0];
    char y = s[s.length()-1];
    bool z;

    string n = "";
    for(i=1;i<s.length()-1;i++){
        n+=s[i];
    }

    if(s.length()<=3){
        if(x==y){
            return true;
        }else{
            return false;
        }
    }else{
        z = check(n);
        if(x==y && z){
            return true;
        }else{
            return false;
        }
    }
}

int main(){
    string s = "PROBLEM3";
    cout << check(s) << endl;
    return 0;
}
