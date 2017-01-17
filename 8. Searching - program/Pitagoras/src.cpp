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
#include <time.h>
#include <sstream>
using namespace std;
#define ot(x) cout<<x<<endl
#define cen cout<<endl
#define dt clock_t t1, t2
#define ts t1=clock()
#define te t2=clock()
#define lt cout<<(float)((float)t2-(float)t1)/CLOCKS_PER_SEC<<endl
int m,n,x,i,tmp,a[1010],b[1010],j;

typedef long long ll;

int main()
{
    scanf("%d",&n);
    for(i=1;i<n;i++){
        ll ms=(ll)n*n-(ll)i*i;

        if((ll)n*n==(ll)sqrt(ms)*(ll)sqrt(ms)+(ll)i*i){
            tmp++;
        }
    }
    ot(tmp);
    return 0;
}
