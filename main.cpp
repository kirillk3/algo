#include <iostream>
#include <math.h>
//#include <stdlib.h>
using namespace std;
int main ()
{
    int xa,ya,xb,yb,xc,yc;
    float ab,bc,ac,p,s;
    cout<<"enter Xa, Ya"<<endl;
    cin>>xa>>ya;
    cout<<"enter Xb, Yb"<<endl;
    cin>>xb>>yb;
    cout<<"enter Xc, Yc"<<endl;
    cin>>xc>>yc;

    ab=sqrt(pow(xb-xa,2)+pow(yb-ya,2));
    bc=sqrt(pow(xc-xb,2)+pow(yc-yb,2));
    ac=sqrt(pow(xc-xa,2)+pow(yc-ya,2));
    p=ab+bc+ac;
    s=sqrt(p/2*(p/2-ab)*(p/2-bc)*(p/2-ac));
    cout<<"The perimeter of the triangle, P= "<<p<<endl;
    cout<<"The area of the triangle is S= "<<s<<endl;
}
