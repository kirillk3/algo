#include <iostream>
#include <time.h>
//#include <iomanip>
//#include <math.h>
//#include <stdlib.h>
#include <iostream>
using namespace std;
int main ()
{
time_t seconds = time(NULL);
tm* timeinfo = localtime(&seconds);
cout<<"Current Datetime:"<<asctime(timeinfo)<<endl;
cin.get();
return 0;
}