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

int main(){
    int pow=-1,koin=-1;
    cin>>n>>m>>k>>t;
    for(i=0;i<m;i++){
        cin>>l>>j;
        pow=max(l,pow);
        koin=max(j,koin);
    }
    int ans=0,tmp=0;
    while(pow<=n){
        while(tmp<k){
            tmp+=koin;
            ans++;
        }
        pow+=t*(tmp/k);
        koin+=t*(tmp/k);
        tmp%=k;
    }
    ot(ans+1);
    return 0;
}
