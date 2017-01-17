#include <iostream>
using namespace std;

int main()
{
    int n,a[22],mnm=1000;

	cin >> n;
	for(int i=1;i<=n;i++){
        cin>>a[i];
        if(mnm>a[i]){
            mnm=a[i];
        }
	}

	cout << mnm << endl;


	return 0;
}
