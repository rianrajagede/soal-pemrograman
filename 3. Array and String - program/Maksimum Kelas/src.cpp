    #include <iostream>
using namespace std;

int main()
{
    int n,a[229][100],mxm=-1,m,id;

	cin >> n >> m;
	for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
            if(a[i][j]>mxm){
                mxm=a[i][j];
                id=i;
            }
        }
	}

	cout << id <<" "<<mxm << endl;


	return 0;
}
