#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int i,n,m,a[100];
    cin >> n;

    for(i=0;i<n;i++){
        cin >> a[i];
    }
    cin>>m;

    for(i=0;i<n;i++){
        if(a[i]==m){
            cout << "ADA" << endl;
            return 0;
        }
    }
    cout<<"TAK" << endl;
    return 0;
}
