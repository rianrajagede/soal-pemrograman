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
#define x first
#define y second
#define INF 1000000000
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
vector<vii> AdjList;
priority_queue< pair<double, ii> > EdgeList;
int n,t,j,k,i,m,l;
string s[30];

int main ()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    ot("***");
    for(i=0;i<n;i++){
        int lz=-1,lnz=-1;

        for(j=0;j<s[i].length();j++) if(s[i][j]=='0')lz=j;
        if(i!=n-1)for(j=0;j<s[i+1].length();j++)if(s[i+1][j]=='0')lnz=j;

        if(i==0){
            for(j=0;j<s[i].length();j++){
                if(s[i][j]=='.' && j<lz) cout<<"   ";
                if(s[i][j]=='0' && j!=lz)cout<<" _ ";
                else if(s[i][j]=='0') cout<<" _";
            }cen;
        }
        for(j=0;j<s[i].length();j++){
            if(s[i][j]=='.') cout<<"___";
            if(s[i][j]=='0')cout<<"/ \\";
        }cen;
        for(j=0;j<s[i].length();j++){
            if(i!=n-1 && s[i][j]=='.' && j<max(lz,lnz) && s[i+1][j]=='0') cout<<" _ ";
            else if(i!=n-1 && s[i][j]=='.' && s[i+1][j]=='0') cout<<" _";
            else if(s[i][j]=='.' && j<max(lz,lnz)) cout<<"   ";
            if(s[i][j]=='0')cout<<"\\_/";
        }cen;
    }
    ot("***");
    return 0;
}
/*
5 4
0.00
00..
.0.0
....
0000
15 15
0.000.000.000.0
00..00..00..00.
.0.0.0.0.0.0.0.
...............
000000000000000
0.00.0.0.0.0.0.
00..0.000.000.0
.0.000000000000
.....0.0.0.0.0.
000000..00..0.0
0.000.00000000.
00..0000.0000.0
.0.0.0.0.0.0.0.
.....0.0.0.0...
00.0000..00.000
*/
