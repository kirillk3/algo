#include <iostream>
#include <time.h>
//#include <iomanip>
//#include <math.h>
//#include <stdlib.h>
#include <iostream>
using namespace std;
int main ()
{
int abcdefg[28]={0};
int hours,mins,a1,a2,a3,a4=0;
time_t seconds = time(NULL);
tm* timeinfo = localtime(&seconds);
cout<<"Current hours:"<<timeinfo->tm_hour<<endl;
cout<<"Current min:"<<timeinfo->tm_min<<endl;
hours=timeinfo->tm_hour;
mins=timeinfo->tm_min;
a1=hours/10;
a2=hours%10;
a3=mins/10;
a4=mins%10;
for (int k = 0; k < 4; k++)
{ int digit=0;
    switch (k)
    {
    case 0:
    digit=a1;
        break;
    case 1:
    digit=a2;
        break;
    case 2:
    digit=a3;
        break;
    case 3:
    digit=a4;
        break;
    }
switch(digit)
{
    case 1:
        abcdefg[5+2*k]=1;  // 5 17
        abcdefg[17+2*k]=1;
          break;
    case 2:
        abcdefg[0+1*k]=1;  // 0 5 12 16 24
        abcdefg[5+2*k]=1;
        abcdefg[12+1*k]=1;
        abcdefg[16+2*k]=1;
        abcdefg[24+1*k]=1;
        break;
    case 3:
        abcdefg[0+1*k]=1;  // 0 5 12 17 24
        abcdefg[5+2*k]=1;
        abcdefg[12+1*k]=1;
        abcdefg[17+2*k]=1;
        abcdefg[24+1*k]=1;
        break;
    case 4:
        abcdefg[4+2*k]=1;  // 4 12 5 17
        abcdefg[12+1*k]=1;
        abcdefg[5+2*k]=1;  
        abcdefg[17+2*k]=1;
        break;
    case 5:
        abcdefg[0+1*k]=1;  // 0 4 12 17 24
        abcdefg[4+2*k]=1;
        abcdefg[12+1*k]=1;  
        abcdefg[17+2*k]=1;
        abcdefg[24+1*k]=1;
        break;
    case 6:
        abcdefg[0+1*k]=1;  // 0 4 12 16 17 24
        abcdefg[4+2*k]=1;
        abcdefg[12+1*k]=1;
        abcdefg[16+2*k]=1;
        abcdefg[17+2*k]=1;
        abcdefg[24+1*k]=1;
        break;
    case 7:
        abcdefg[0+1*k]=1;  //  0 5 17
        abcdefg[5+2*k]=1;
        abcdefg[17+2*k]=1;
        break;
    case 8:
        abcdefg[0+1*k]=1;  // 0 5 17 24 16 4 12
        abcdefg[5+2*k]=1;
        abcdefg[17+2*k]=1;
        abcdefg[24+1*k]=1;
        abcdefg[16+2*k]=1;
        abcdefg[4+2*k]=1;
        abcdefg[12+1*k]=1;
        break;
    case 9:
        abcdefg[5+2*k]=1;  // 0 5 17 4 12 24
        abcdefg[17+2*k]=1;
        abcdefg[4+2*k]=1;
        abcdefg[12+1*k]=1;
        abcdefg[24+1*k]=1;
        break;
    default:
        abcdefg[0+1*k]=1;  // 0 5 17 24 16 4
        abcdefg[5+2*k]=1;
        abcdefg[17+2*k]=1;   ///default это ноль
        abcdefg[24+1*k]=1;
        abcdefg[16+2*k]=1;
        abcdefg[4+2*k]=1;
        break;
}
}

//           ____0__     ____1__        ____2__     ____3__ 
//          |       |   |       |      |       |   |       |       
//          |4      |5  |6      |7  *  |8      |9  |10     |11 
//          |___12__|   |___13__|      |___14__|   |___15__|
//          |       |   |       |      |       |   |       |
//          |16     |17 |18     |19 *  |20     |21 |22     |23
//          |___24__|   |___25__|      |___26__|   |___27__|
//                  
for (int i = 0; i < 4; i++)
{
cout<<" ";
   for (int a=0; a < 2; a++)
   {
      if (abcdefg[i]==1) cout<<char(219); else cout<<" ";      ///верхние горизонтальные черты
   }
     cout<<"   ";
}
cout<<endl;                 //переходим к след строке
for (int u = 0; u < 2; u++)
{
for (int i = 4; i < 12; i++)
{
 if (abcdefg[i]==1) {cout<<char(219); cout<<"  ";} else cout<<"   ";   //верхняя вертикальная черта
}

cout<<endl;                 //переходим к след строке
}
for (int i = 12; i < 16; i++)
{ cout<<" ";
   for (int a=0; a < 2; a++)
   {
      if (abcdefg[i]==1) cout<<char(219); else cout<<" ";      ///средняя горизонтальная черта
       
   }
   cout<<"   ";
}
cout<<endl;                 //переходим к след строке
for (int u = 0; u < 2; u++)
{
for (int i = 16; i < 24; i++)
{
 if (abcdefg[i]==1) {cout<<char(219); cout<<"  ";} else cout<<"   ";   //нижняя вертикальная черта

}
cout<<endl;                 //переходим к след строке
}
for (int i = 24; i < 28; i++)
{
    cout<<" ";
   for (int a=0; a < 2; a++)
   {
      if (abcdefg[i]==1) cout<<char(219); else cout<<" ";      ///нижняя горизонтальная черта
   }
     cout<<"   ";
}

return 0;
}