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
double d;

int main()
{
    cin>> d;
    if(d>90 && d!=180){
        ot("tumpul");
    }else if(d<90){
        ot("lancip");
    }else if(d==180){
		ot("lurus");
	}else{
		ot("siku");
	}
    return 0;
}
