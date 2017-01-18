#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int i,j,n;
    string m;
    cin >> n >> m;
    if(m=="H"){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(i%2==1){
                    cout<<"#";
                }else{
                    cout<<"-";
                }
            }
            cout<<endl;
        }
    }else{
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(j%2==1){
                    cout<<"#";
                }else{
                    cout<<"|";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
