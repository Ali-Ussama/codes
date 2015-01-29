#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main(){
	freopen("thermel","rt",stdin);
   double C,d,F;
   long long T;
   cin>>T;
   for(long long x=1;x<=T;x++){
   cin>>C>>d;
   F=((9*C)/5)+32;
   F+=d;
   C=((F-32)*5)/9;
cout<<"Case "<<x<<": "<< fixed <<setprecision(2)<<C<<endl;;
}
return 0;
}
