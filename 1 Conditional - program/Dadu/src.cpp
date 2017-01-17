#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,6,5,4};
    int i,n;
    cin >> n;
    for(i=0;i<6;i++){
        if(a[i]!=n && a[i]!=7-n){
            cout<<a[i]<<endl;
        }
    }
    return 0;
}
