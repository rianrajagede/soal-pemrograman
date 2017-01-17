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
#include <ctime>
#include <sstream>
using namespace std;
#define ot(x) cout<<x<<endl
#define cen cout<<endl
#define EPS 1e-10
#define mp(x,y) make_pair(x,y)
#define DFS_GRAY 2
#define DFS_WHITE -1
#define DFS_BLACK 1
#define INF 1000000000
#define fi first
#define sc second
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
vector<vii> AdjList;
priority_queue< pair<ll, ii> > EdgeList;
int n,t,j,k,i,m,l,tc,itc;
map<int,bool> mp;
queue<int>q;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    while(n--){
        while(q.size())q.pop();
        cin>>m; int ans=-1;
        mp.clear();
        for(i=0;i<m;i++){
            cin>>t;
            if(!mp[t]){
                q.push(t);
                mp[t]=1;
            }else{
                while(q.front()!=t){
                    mp[q.front()]=0;
                    q.pop();
                }
                q.pop();
                q.push(t);
            }
            ans=max(ans,(int)q.size());
        }
        ot(ans);
    }
    return 0;
}
/*

*/
