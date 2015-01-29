#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main(){
freopen("Big","rt",stdin);
   long long N,T;
   cin>>T;
   for(long long y=1;y<=T;y++){
   cin>>N;
   double ans = 0 ;
   for(long long x=1;x<=N;x++){
   	   ans+= log10(x);
   }
   cout<<1+(int)ans <<endl;
}
return 0;
}
