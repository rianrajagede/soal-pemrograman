#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <deque>
#include <sstream>
using namespace std;
#define ot(x) cout<<x<<endl
#define cen cout<<endl
#define EPS 1e-10
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
vector<vii> AdjList;
priority_queue< pair<int, ii> > Edgelist;
int n,t,j,k,i,m,l;
int a[100010],b[100100];
string s,ss;

int main()
{
	cin>>t;
	while(t--){
		cin.ignore();
		getline(cin,s);
		cin>>ss;
		if(ss.length()>s.length()){
			printf("TIDAK BISA\n");
			return 0;
		}
		k=0;
		for(i=0;i<s.length() && k<ss.length();i++){
			if(s[i]==ss[k])k++;
		}
		if(k==ss.length()){
			printf("BISA\n");
		}else{
			printf("TIDAK BISA\n");
		}
	}
    return 0;
}
/*
3 3
1 4
2 2
3 2
*/
