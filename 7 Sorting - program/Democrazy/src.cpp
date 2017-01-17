#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
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
int n,m,t,i,j,k;
ii a[300];
vector< int > b;

int main()
{
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&k);
        a[k].first++;
        a[k].second=k;
    }
    sort(a,a+m+1);
//    for(i=0;i<=m;i++){
//        printf("%d ",a[i]);
//    }
//    cen;
    if(a[m-2].first==a[m-1].first)printf("Waspada Koalisi\n");
    else printf("%d\n",a[m-1].second);
}
/*
4 3
3
2
1
3
*/
