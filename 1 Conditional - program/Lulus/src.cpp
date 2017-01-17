#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    int x = 0;
    cin >> a >> b >> c >> d >> e;
    cin >> f;

    if(a >= f){ x++; }
    if(b >= f){ x++; }
    if(c >= f){ x++; }
    if(d >= f){ x++; }
    if(e >= f){ x++; }

    cout << x << endl;
}
