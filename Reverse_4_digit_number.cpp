#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a ;
    int b,c,d,e;
    // cin>>b;
    // cin>>c;
    cin>>a;
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    a=a/10;
    e=a%10;
    a=a/10;
    cout<<(b*1000)+(c*100)+ (d*10)+ (e*1);
    return 0;
}