#include <iostream>
using namespace std;

int a,b;
int main()
{
    cin>>a>>b;
    for(;a!=1 && a<=100;){
        if(a%2==1){
            a*=b;
            a++;
        }else{
            a/=2;
        }
    }
    if(a>100){
        cout<<"batas atas\n";
    }else{
        cout<<"batas bawah\n";
    }
    return 0;
}
