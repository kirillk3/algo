#include <iostream>
#include <iomanip>
#include <math.h>
//#include <stdlib.h>
using namespace std;
int main ()
{
    float a, b;
    int s;
    cout<<"Enter (float) a, b"<<endl;
    cin>>a>>b; //a должно быть меньше чем b
    cout<<"Enter (int) s"<<endl;
    cin>>s;
    float tochki[s+1]; //на отрезках n частей получается n+1 точек промежутка (*-*-*-*)
    cout<<"Tochki: ";
    for (int i = 0; i<(s+1); i++) 
    {
        tochki[i]=a+i*((b-a)/s); //abs не нужен
        cout<<fixed<<setprecision(2)<<tochki[i]<<" | ";
    }
     cout<<endl;
     cout<<"Sin   : ";
    for (int i = 0; i<(s+1); i++) 
    {
      //  tochki[i]=a+i*((b-a)/s); //abs не нужен
        cout<<fixed<<setprecision(2)<<sin(tochki[i])<<" | ";
    }
       cout<<endl;
     cout<<"Cos   : ";
    for (int i = 0; i<(s+1); i++) 
    {
      //  tochki[i]=a+i*((b-a)/s); //abs не нужен
        cout<<fixed<<setprecision(2)<<cos(tochki[i])<<" | ";
    }
 //   length=2*M_PI*r;
  //  cout<<"Length of circle = "<<length;

}
