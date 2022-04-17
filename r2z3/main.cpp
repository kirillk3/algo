#include <iostream>
#include <math.h>
#include <iomanip>
//#include <stdlib.h>
using namespace std;
int main ()
{
    int n;
    float p,lsum,ltape;
    p=0;lsum=0;
    cout<<"enter n of trees"<<endl;
    cin>>n;
    if (n<2) {return 0;};
    float x1,y1,xa,ya,xb,yb;
 cout<<"enter X1, Y1"<<endl;
    cin>>x1>>y1;
    xa=x1; ya=y1;
    for (int i=1;i<n;i++) {
        cout<<"enter X"<<i+1<<", Y"<<i+1<<endl;
        cin>>xb>>yb;
        if ((i==(n-1))&&(n>2)) p+=sqrt(pow(x1-xb,2)+pow(y1-yb,2));
        p+=sqrt(pow(xb-xa,2)+pow(yb-ya,2));
        xa=xb; ya=yb;
        } 
    for (int i=0; i<n; i++)
    {   float l;
        cout<<"enter tree l"<<i+1<<endl;
        cin>>l;
        lsum+=l;
    }
    ltape=(lsum/n)+p;
cout<<"p="<<p<<endl; ///периметр многоугольника
cout<<"l of tape ="<<fixed<<setprecision(2)<<ltape; //длина ленты

}
